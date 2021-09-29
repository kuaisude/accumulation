import copy
class stone(object):
    def __init__(self,width,length,s):
        self.width = width
        self.length = length
        self.s = s
 
class MyGlobal():
    def __init__(self):
        self.cs = 0
        self.bests = 0
 
GL = MyGlobal()
 
def B(GL,i,stonelist,n):
    sum = 0
    for a in range(i+1,n):
        sum += stonelist[a].s
    return sum+GL.cs
#剪支函数，如果当前面积加上把i+1..n块石板都切割完成的面积和 < 当前已经得到的bests，则不搜索0分支
 
 
def BacktrackPacking(i,stonelist,remaining_stonelist,GL,n,flag):
    flag = 0
    if i > n-1:
        if GL.cs > GL.bests:
            GL.bests = GL.cs
            print("bests:", GL.bests)
    else:
        if stonelist[i].width < remaining_stonelist[0].width and stonelist[i].length == \
            remaining_stonelist[0].length:
            # 当前需要的最大石板的宽小于我要切割的石板，两者的长相等，则按照宽来一刀切
            remaining_stonelist1 = copy.deepcopy(remaining_stonelist)
            GL.cs += stonelist[i].s
            a = stone(remaining_stonelist[0].width-stonelist[i].width, stonelist[i].length,(remaining_stonelist[0].width-stonelist[i].width)*stonelist[i].length)
            remaining_stonelist.append(a)
            remaining_stonelist.pop(0)
            remaining_stonelist.sort(key=lambda stone:stone.s, reverse=True)
            print("①：", GL.cs)
            print("remaining_stonelist:有")
            for k in remaining_stonelist:
                print(k.width, k.length, k.s)
            BacktrackPacking(i+1, stonelist, remaining_stonelist, GL, n,flag)
            GL.cs -= stonelist[i].s
            flag = 1
        elif stonelist[i].width == remaining_stonelist[0].width and stonelist[i].length <\
            remaining_stonelist[0].length:
            # 当前需要的最大石板的宽等于我要切割的石板的宽，长小于我要切割的石板，则按照长来一刀切
            remaining_stonelist1 = copy.deepcopy(remaining_stonelist)
            GL.cs += stonelist[i].s
            a = stone(stonelist[i].width, remaining_stonelist[0].length-stonelist[i].length,stonelist[i].width * (remaining_stonelist[0].length-stonelist[i].length))
            remaining_stonelist.append(a)
            remaining_stonelist.pop(0)
            remaining_stonelist.sort(key=lambda stone: stone.s, reverse=True)
            print("②：", GL.cs)
            print("remaining_stonelist:有")
            for k in remaining_stonelist:
                print(k.width, k.length, k.s)
            BacktrackPacking(i + 1, stonelist, remaining_stonelist, GL, n,flag)
            GL.cs -= stonelist[i].s
            flag = 1
        elif stonelist[i].width == remaining_stonelist[0].width and stonelist[i].length ==\
            remaining_stonelist[0].length:
            # 如果当前需要的最大石板的长和宽都和我要切割的石板的长和宽相等，则匹配成功，从remaining和stonelist都去掉这两块石板
            remaining_stonelist1 = copy.deepcopy(remaining_stonelist)
            GL.cs += stonelist[i].s
            remaining_stonelist.pop(0)
            remaining_stonelist.sort(key=lambda stone: stone.s, reverse=True)
            print("③：", GL.cs)
            print("remaining_stonelist:有")
            for k in remaining_stonelist:
                print(k.width, k.length, k.s)
            BacktrackPacking(i + 1, stonelist, remaining_stonelist, GL, n,flag)
            GL.cs -= stonelist[i].s
            flag = 1
        elif stonelist[i].width < remaining_stonelist[0].width and stonelist[i].length < \
            remaining_stonelist[0].length:
            # 如果当前需要的最大石板的长和宽都小于我正在切割的石板的长和宽，则默认按照长来切(可以尝试默认按照宽来切，看哪种的利用率更大)
            remaining_stonelist1 = copy.deepcopy(remaining_stonelist)
            GL.cs += stonelist[i].s
            a = stone(remaining_stonelist[0].width - stonelist[i].width, remaining_stonelist[0].length,(remaining_stonelist[0].width - stonelist[i].width) * remaining_stonelist[0].length)
            remaining_stonelist.append(a)
            a = stone(stonelist[i].width, remaining_stonelist[0].length-stonelist[i].length,stonelist[i].width*(remaining_stonelist[0].length-stonelist[i].length))
            remaining_stonelist.append(a)
            remaining_stonelist.pop(0)
            remaining_stonelist.sort(key=lambda stone: stone.s, reverse=True)
            print("④：", GL.cs)
            print("remaining_stonelist:有")
            for k in remaining_stonelist:
                print(k.width, k.length, k.s)
            BacktrackPacking(i + 1, stonelist, remaining_stonelist, GL, n, flag)
            GL.cs -= stonelist[i].s
            flag = 1
        if B(GL, i, stonelist, n) > GL.bests:
            print("满足剪支函数，当前GL.cs= ", GL.cs, "bests= ", GL.bests)
            print("remaining_stonelist1:有")
            # for k in remaining_stonelist1:
            #    print(k.width, k.length, k.s)
            if flag == 0:
                #flag=0，表示当前样板石块无法切割，直接走的0分支
                BacktrackPacking(i+1, stonelist, remaining_stonelist, GL, n, flag)
            elif flag == 1:
                #flag=1,表示当前石板已经切割过，是回溯回来尝试走0分支，寻找更好的解
                BacktrackPacking(i+1, stonelist, remaining_stonelist1, GL, n, flag)

if __name__ == '__main__':
    print("请输入最大石板的宽和长：")
    width = int(input())
    length = int(input())
    a = stone(width, length, width*length)
    remaining_stonelist = []
    remaining_stonelist.append(a)
    stonelist = []
    print("请输入样板石块的种类：")
    n = int(input())
    print("请输入样板石块的宽和长")
    for i in range(n):
        info = input().split()
        b = stone(int(info[0]), int(info[1]), int(info[0])*int(info[1]))
        stonelist.append(b)
    stonelist.sort(key=lambda stone:stone.s, reverse=True)
    # for i in stonelist:
    #     print(i.width,i.length,i.s)
    # #对所需模块列表按照面积进行从大到小的排序
    flag = 0
    BacktrackPacking(0, stonelist, remaining_stonelist, GL, n, flag)
    print("最大切割面积为：", GL.bests)
    print("最大利用率为：", GL.bests/(width*length))

