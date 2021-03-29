/*
while循环test（1）-1 

分别输入
0	1024	1234567890 
*/

#include<iostream>
using namespace std;
int main(){
	int n,s = 0;
	cin>>n;
	while(n)
	{
		s = s*10 + n%10;
		n/=10;	
	} 
	cout<<s<<endl;
	return 0; 
} 

