/*
4-26
对于给定的自然数n(n<20),在屏幕上输出仅有“*”构成的n行的直角三角形

例如：当n = 4时，输出：
*
**
***
****
*****
 
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i =1 ;i<=n;i++)
	{
		for(j = 1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	} 
	return 0; 
} 

