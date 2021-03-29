#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;
	int bottom = (int)sqrt(2.0*(n+1)) - 1;
	if(bottom % 2 == 0)
	{
		bottom--;
	}
	int used = (bottom + 1)*(bottom + 1) / 2 - 1;
	for(int i = bottom; i >= 1;i -= 2)
	{
		for(int j = 0;j<(bottom - i)/2;j++)
		{
			cout<<" ";
		}
		for(int j = 0;j<i;j++)
		{
			cout<<c;
		}
		cout<<endl;
	}
	
	for(int i = 3; i <= bottom;i += 2)
	{
		for(int j = 0;j<(bottom - i)/2;j++)
		{
			cout<<" ";
		}
		for(int j = 0;j<i;j++)
		{
			cout<<c;
		}
		cout<<endl;
	}
	cout<<n - used;
	return 0;
}
