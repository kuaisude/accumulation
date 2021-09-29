#include<iostream>
using namespace std;
int main()
{
	int n,i=0,j=0,sum=0;
	int a[10];
	cin>>n;
	while(i<n)
	{
		cin>>a[i];
		i++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum+=a[i]*10+a[j];
			sum+=a[j]*10+a[i];
		}
	}
	cout<<sum<<endl;
	return 0;	
} 

