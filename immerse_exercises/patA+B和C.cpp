#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int a[3] = {0};
	cin>>n; 
	for(int i = 0;i<n;i++)
	{
		cin >> a[0] >>a[1]>>a[2];
		if(a[0]+a[1]>a[2])
		{
			cout<<"Case #"<<i+1<<": true"<<endl;
		}
		else
		{
			cout<<"Case #"<<i+1<<": false"<<endl;
		}
	}
	return 0;
}
