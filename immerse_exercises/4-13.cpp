/*
4.13�жϸ���������n����֤����������Χ�ڣ��Ƿ�Ϊ�������ǣ������Yes���������No�� 


*/

#include<iostream>
using namespace std;
int main(){
	long long n,i;
	cin>>n;
	i = 2;
	while(n%i!=0)
	{
		i++;	
	} 
	if(i>n-1)
		cout<<"yes"<<endl;
	else
		cout<<"No"<<endl; 
	
	return 0; 
} 
