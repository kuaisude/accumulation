#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<ctime>

using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n+1] = {};
	memset(a,0,sizeof(a));
	
	int l = 0;
	for(int i = 0;i<n-1;i++)
	{
		for(int j = 0;j<m;){
			l++;
			if(l > n) l = 1;
			if(a[l] == 0) j++;
		}
		a[l] = 1;
	}
	
	for(int i = 1;i <= n;i++)
	{
		if(a[i] == 0) cout << i << endl;
	}
	
	return 0;
}
