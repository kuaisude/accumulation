#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	int l = 0;
	cin >> n >> m;
	bool a[n+1];
	memset(a,-1,sizeof(a));
	for(int i = 0;i<n-1;i++)
	{
		int k = 0;
		while(k<m)
		{
			l++;
			if(l > n) l = 1;
			if(a[l]) k++;	
		}
		a[l] = 0;
	}
	for(int i = 1;i<=n;i++)
	{
		if(a[i])cout << i << endl;
	}
	return 0;	
}
