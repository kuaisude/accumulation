/*
4-29
��һ�������ֽ�����ɸ��������˻�����ʽ�������������Ĺ��̣������ֽ���������
�ֽ���������Ҳ�Ʒֽ���������ֻ��Ժ�����

����������
	36
���������
	36 = 2*2*3*3 
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	cout<<n<<"=";
	do
	{
		while(n%i == 0)
		{
			cout<<i;
			n/=i;
			if(n!=1)
			{
				cout<<"*";
			}
		}
		i++;
	}while(n!=1);
	return 0; 
} 

