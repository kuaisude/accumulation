/*
4.13判断给定正整数n（保证在正整数范围内）是否为质数，是，则输出Yes，否则，输出No。 


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
