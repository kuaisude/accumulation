#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<iostream> 
using namespace std;

int main(){
	double luckey[19]={1.66,1.68,16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99};//������
	double red[200];//���
	double m,r_m,m_m; //��������ڽ���֤���
	int n; //�ֳ�n�����
	int i,k;
	
	
	cout << "��������n:";
	cin >> n;
	cout << "����Ǯ��m:";
	cin >> m;
	
	for(i=0;i<n;i++) //����Ϊ0.01
	{
		red[i]=0.08;
		luckey[i] -= 0.08;
	}

	r_m = m - 0.08*n;

	while(1)//ѭ��
	{
		for(i=0;i<n;i++)//ѭ��ÿ�����
		{
			k=rand()%10;
			red[i] = red[i] + luckey[k] ;  //���������Ӽ�����
			r_m = r_m - luckey[k] ;
			if(r_m == 0) //�жϽ�������
			{
				goto here;
			}
			if(r_m < 0)  //�жϽ�����һ��
			{		
				red[i] = red[i] + r_m;
				goto here;
			}
		}
	}
	here:
	for(i=0;i<n;i++) //ѭ��������
	{	
		m_m=m_m+red[i];
		cout << red[i] << "\t";
	}
	cout << endl;
	return 0;
}

