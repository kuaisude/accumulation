/*
while循环test（1）-2 

分别输入
4	0
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0)
	{
		cout<<n%2;
		n/=2;
	}
	return 0; 
} 

