/*
4-21对于给定的任意正整数，将其各个位数上的数字分离出来，并倒序输出。 
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	do
	{
		cout<<n%10<<" ";
		n/=10;
	}while(n!=0);
	return 0;
} 

