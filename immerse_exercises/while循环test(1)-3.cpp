/*
while循环test（1）-3

分别输入
100 79 2
*/

#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	i = n-1;
	while(i>1&&n%i!=0)
	{
		i--;
	}
	cout<<i;
	return 0; 
} 

