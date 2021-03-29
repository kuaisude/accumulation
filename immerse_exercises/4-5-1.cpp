/*
4.5输出100以内所有偶数 
方法一 

*/

#include<iostream>
using namespace std;
int main(){
	int i;
	for(i = 1;i<=100;i++)
	{
		if(i%2 == 0)
		{
			cout<<i<<" ";
		}	
	} 
	return 0;
} 
