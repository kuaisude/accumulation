/*
4.15	输入任意两个自然数，求它们的最大公约数 
方法2——欧几里德算法，辗转相除法 

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
