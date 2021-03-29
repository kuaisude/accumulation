/*
4-23
对于给定的自然数n，输出1~n之间的全部质数 
*/

#include<iostream>
using namespace std;
int main(){
	int n,m,i;
	cin>>n;
	for(m = 2;m<=n;m++)
	{
		i = 2;
		while(m%i!=0&&i<=m-1)
		{
			i++;
		}
		if(i>m-1)
		{
			cout<<m<<" ";
		}
	} 
	return 0; 
} 

