/*
do...while循环题test-1

分别输入4	0 
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	do
	{
		cout<<n%2;
		n/=2;
	}while(n!=0);
	return 0; 
} 

