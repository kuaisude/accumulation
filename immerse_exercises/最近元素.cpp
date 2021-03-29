#include<iostream>
#include<algorithm>
using namespace std;
int a[100001],b[10001];
int shit(int l,int j,int m)
{
	if(j-l<=1)
		return m-a[l]<=a[j]-m?a[l]:a[j];
	int mid=(l+j)/2;
	if(m>a[mid])
		return shit(mid,j,m);
	else
		return shit(l,mid,m); 
}
int main()
{
	int m,n,num;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>num;
		b[i]=shit(1,n,num); 
	}
	for(int i=1;i<=m;i++)
		cout<<b[i]<<endl;
	return 0;
}
