#include<iostream>
using namespace std;
int a[1001] = {0,1,2};
int main()
{
	int n;
	cin>>n;
	for(int i = 3;i<=n;i++)
		a[i] = a[i-2]+a[i/2];
	cout<<a[n]<<endl;
}
