/*
4.15	��������������Ȼ���������ǵ����Լ�� 
����2����ŷ������㷨��շת����� 

*/

#include<iostream>
using namespace std;
int main(){
	int a,b,tmp;
	cin>>a>>b;
	while(tmp = a%b)
	{
		a = b;
		b = tmp;	
	}
	cout<<b<<endl;
	return 0;
} 
