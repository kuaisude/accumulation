/*
do...whileѭ����test-2

�ֱ�����100	79	2
*/

#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	i = n-1;
	do
	{
		i--;
	}while(i>1&&n%i!=0);
	cout<<i;
	return 0; 
} 

