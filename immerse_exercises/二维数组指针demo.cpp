#include <stdio.h>
int main ()
{
    int nArry[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    int *p[4],i,j,*psave,index[2];//p[]�ֱ�ָ��ÿ���׵�ַ
    printf("��ӡԭ���飺");
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
        printf("\n\n����2����Ҫ�������кţ�");
        scanf("%d%d",&index[0],&index[1]);
        for(i=0;i<4;i++)
        {
            p[i]=&nArry[i][0];
        }
        psave=p[index[0]-1];
        p[index[0]-1]=p[index[1]-1];
        p[index[1]-1]=psave;
        printf("��%d�к͵�%d�е����������Ϊ��\n",index[0],index[1]);
        for(i=0;i<4;i++)  //��˳���ӡ �׵�ַָ�뿪ͷ��������
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
