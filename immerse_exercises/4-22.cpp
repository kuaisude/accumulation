/*
4-22	��������������Ķ�������������ֵ�Ķ����������м�λ���� 
*/

#include<iostream>
using namespace std;
int main(){
	int n,num = 0;
	cin>>n;
	do
	{
		num++;
		n/=2;
	}while(n!=0);
	cout<<num;
	return 0;
} 

