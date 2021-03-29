#include<iostream>
using namespace std;
const int MAXN = 100000;
int main()
{
	int a[MAXN];
	int i,n;
	cin>>n;
	for(i =0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i = n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
 } 
