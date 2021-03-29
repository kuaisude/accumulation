/*
4.15	输入任意两个自然数，求它们的最大公约数 
方法1 

*/

#include<iostream>
using namespace std;
int main(){
	int a,b,gcd;
	cin>>a>>b;
	gcd = a>b?b:a;
	while (gcd>1&&(a%gcd != 0||b%gcd != 0))
	{
		gcd--;	
	} 
	cout<<gcd<<endl;
	return 0;
} 
