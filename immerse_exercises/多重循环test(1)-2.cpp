/*
����ѭ��test(1)-2
 
 
����10 
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i = 2;i<=n;i++)
	{
		j = i - 1;
		while(j>1&&i%j!=0)
		{
			j--;
		}
		cout<<i<<"("<<j<<")";
	}
	return 0; 
} 


