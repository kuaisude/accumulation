#include<iostream>
#include<cstring>
const int MAXN = 100001;
using namespace std;
int main()
{
	int s[MAXN],a[MAXN];
	memset(s,0,sizeof(s));
	int n,i,j;
	int maxsum;
	int temp;
	cin >> n;
	for(i = 1;i<=n;i++)
	{
		cin>>a[i];
		s[i] = a[i] + s[i-1];
	}
	maxsum = a[1];
	for(i = 1;i<=n;i++)
		for(j = i;j<=n;j++)
		{
			temp = s[j] - s[i-1];
			if(maxsum<temp){
				maxsum = temp;
			}
		}
	cout<<maxsum;
	return 0;
}
