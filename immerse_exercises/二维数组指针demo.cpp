#include <stdio.h>
int main ()
{
    int nArry[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    int *p[4],i,j,*psave,index[2];//p[]分别指向每行首地址
    printf("打印原数组：");
    i=16; p[0]=&nArry[0][0];
    while(i-->0)
    {
        if((i+1)%4==0)
            printf("\n");
        printf("%d ",*(p[0]));
        p[0]++;
    }
 
    while(1)
    {
        printf("\n\n输入2个你要交换的行号：");
        scanf("%d%d",&index[0],&index[1]);
        for(i=0;i<4;i++)
        {
            p[i]=&nArry[i][0];
        }
        psave=p[index[0]-1];
        p[index[0]-1]=p[index[1]-1];
        p[index[1]-1]=psave;
        printf("第%d行和第%d行调换后的数组为：\n",index[0],index[1]);
        for(i=0;i<4;i++)  //按顺序打印 首地址指针开头的行数字
        {
            for(j=0;j<4;j++)
            {
                printf("%d ",*(p[i]+j));
            }
            printf("\n");
        }
    }
 
    return 0;
}
