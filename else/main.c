#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    double luckey[19]= {1.66,1.68, 16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99}; //������
    double red[200];//���
    double m,rest_m; //�����װ�������ʣ����
    int n; //�������ֳ�n�����
    int i,k;
    printf("��������n:");
    scanf("%d",&n);
    printf("����Ǯ��m:");
    scanf("%lf",&m);

    for(i=0; i<n; i++) //�ȸ�ÿ�����0.01,�����пպ��
    {
        red[i]=0.01;
    }
    rest_m=m-0.01*n;
    srand(time(0));  //��ʱ�������ӣ�ÿ�����в�����ͬ�������

    for(i=0; i<n; i++) //ѭ��ÿ�����
    {
        int p=0;
        k=rand()%20;    //����һ�������k,��Χ0~19
        red[i]=red[i]+luckey[k]-0.01;  //���������Ӽ������ټ�ȥ֮ǰ�е�0.01
        rest_m=rest_m-luckey[k]+0.01 ;
        //printf("%.2f\t",red[i]);
        if(rest_m==0) //û��ʣ���Ǯ�ˣ�����ѭ��
        {
            p=1;
        }
        else if(rest_m<0)  //��ȥһ����������ʣ���ǮΪ��������rest_m�ӻص��ղŵĺ���в�����ѭ��
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
    for(i=0; i<n; i++)  //�ҳ����к������Сֵ
    {
        if(red[i]<min)
        {
            min=red[i];
            t=i;
        }
    }
    red[t]+=rest_m;   //��ʣ���Ǯ��Ǯ���ٵĺ��
    for(int i=0; i<n; i++)   //������еĺ��
    {
        printf("%.2f\t",red[i]);
    }



    return 0;
}

