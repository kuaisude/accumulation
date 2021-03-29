/*
4.14	输入一个正整数，输出其位数 


*/

#include<iostream>
using namespace std;
int main(){
	long long n,num = 1;
	cin>>n;
	while(n>=10)
	{
		num++;
		n/=10;	
	}
	cout<<num<<endl; 
	return 0; 
} 
