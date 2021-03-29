/*
4.1
对于给定的任意正整数你，输出1~n的平方数。 
*/

#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	for(i = 1;i<=n;i++)
	{
		cout<<i*i<<" ";
	}
	return 0;
} 
