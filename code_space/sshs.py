import urllib

def sshs(abc):
    a = abc//100
    b = abc//10%10
    c = abc % 10

    if (a ** 3 + b ** 3 + c ** 3 == abc):
        print("是水仙花数")

    else:
        print("不是水仙花数")



abc = int(input())

sshs(abc)


