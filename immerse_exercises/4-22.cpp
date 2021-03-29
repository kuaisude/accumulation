/*
4-22	计算与任意输入的二进制正整数等值的二进制数共有几位数字 
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

