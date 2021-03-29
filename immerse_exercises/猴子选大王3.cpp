#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n+1];
	memset(a,0,sizeof(a));
	int l = 0;//报数猴子的 位置 
	for(int i = 1;i<n;i++)
	{
		int k = 1; //报数猴子 喊的数 
		while(k <= m)
		{
			l++;
			if(l > n) l = 1;
			if(a[l] == 0)	k++;
		}
		a[l] = 1;
	}
	for(int i = 1;i<=n;i++)
	{
		if(a[i] == 0) cout << i << endl;
	}
	return 0;	
}
