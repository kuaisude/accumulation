import sys
import os
main_sheet = {  
    'l': 0,  
    'w': 0, 
    's': 0
}
main_sheet_square = 0  # 总面积
details = list() 
details_square = 0  #小石块面积

#判空
def isempty():
    for i in details:
        if i['flag'] == 0:
            return False
    return True

#获取信息
def get_details():
    f = open("D:\\workspace\\accumulation\\shi\\nice1.txt", 'r')    #注意路径
    global details_square, main_sheet_square, details
    l = f.readline().split()
    main_sheet['l'] = (int)(input("输入石板的长:"))
    main_sheet['w'] = (int)(input("输入石板的宽:"))
    main_sheet_square = main_sheet['l'] * main_sheet['w']  
    for line in f:
        s = line.split()
        detail_length = int(s[0])
        detail_width = int(s[1])
        detail_square = detail_length*detail_width
        if detail_length < detail_width:  #保证长比宽大
            detail_length, detail_width = detail_width, detail_length
        details.append({
            'l': detail_length,
            'w': detail_width,
            's':detail_square,
            'flag':0
        })
        details_square +=  detail_length * detail_width
    details = sorted(details, key=lambda item: (-item['l']*item['w'], -item['l']))  #按面积大小排序

def TooSmall(l,w):
    for i in details:
        if (i['l']<=l and i['w']<=w and i['flag']==0):
            return False
    return True
def cut(l,w):
    if(isempty()==True):
        return True
    if(TooSmall(l,w)==True):
        return False
    for i in range(len(details)):
        if details[i]['flag']!=1 and details[i]['l']<=l and details[i]['w']<=w:
            break
    if(details[i]['l']==l):
        details[i]['flag'] = 1
        cut(l,w-details[i]['w'])
    elif(details[i]['w']==w):
        details[i]['flag'] = 1
        cut(l-details[i]['l'],w)
    elif(details[i]['w']< w and details[i]['l']<l):
        cut(l,details[i]['w'])
        cut(l,w-details[i]['w'])

area = 0
def display():
    global area
    for item in details:
        if(item['flag']==1):
            print(item['l'],"*",item['w'])
            print(item['s'])
            area += item['s']
        else:
            print("no")

            

        
get_details() 
# print(details)
#isempty()
cut(main_sheet['l'],main_sheet['w'])
print(details)
display()
print("利用率",area/main_sheet_square)