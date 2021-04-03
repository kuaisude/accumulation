#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    double luckey[19]= {1.66,1.68, 16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99}; //吉利数
    double red[200];//红包
    double m,rest_m; //输入金额，装完红包后的剩余金额
    int n; //人数，分成n个红包
    int i,k;
    printf("输入人数n:");
    scanf("%d",&n);
    printf("输入钱数m:");
    scanf("%lf",&m);

    for(i=0; i<n; i++) //先给每个红包0.01,不能有空红包
    {
        red[i]=0.01;
    }
    rest_m=m-0.01*n;
    srand(time(0));  //用时间做种子，每次运行产生不同的随机数

    for(i=0; i<n; i++) //循环每个红包
    {
        int p=0;
        k=rand()%20;    //生成一个随机数k,范围0~19
        red[i]=red[i]+luckey[k]-0.01;  //进行随机添加吉利数再减去之前有的0.01
        rest_m=rest_m-luckey[k]+0.01 ;
        //printf("%.2f\t",red[i]);
        if(rest_m==0) //没有剩余的钱了，结束循环
        {
            p=1;
        }
        else if(rest_m<0)  //减去一个吉利数后剩余的钱为负数，将rest_m加回到刚才的红包中并跳出循环
        {
            red[i] = red[i] + rest_m;
            rest_m=0;
            p=1;
        }
        if(p==1)
            break;
    }

    int min=red[0];
    int t=0;
    for(i=0; i<n; i++)  //找出所有红包的最小值
    {
        if(red[i]<min)
        {
            min=red[i];
            t=i;
        }
    }
    red[t]+=rest_m;   //将剩余的钱给钱最少的红包
    for(int i=0; i<n; i++)   //输出所有的红包
    {
        printf("%.2f\t",red[i]);
    }



    return 0;
}

