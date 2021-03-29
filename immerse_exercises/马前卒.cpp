#include<iostream>
#include<cstring>
#define MAXN 110
using namespace std;
int main()
{
	bool b[MAXN][MAXN];
	long long a[MAXN][MAXN];
	memset(b,0,sizeof(b));
	short dx[8] = {2,1,-1,-2,-2,-1,1,2};
	short dy[8] = {1,2,2,1,-1,-2,-2,-1};
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	b[x][y] = 1;
	for(int i = 0;i<=7;i++)
	{
		if(x + dx[i] >= 0&&x+dx[i] <= n&&y+dy[i] >= 0&&y + dy[i] <= m)
		b[x+dx[i]][y+dy[i]] = 1;
	}
	int k = 0;
	while(!b[k][0]&&k<=n)
	{
		a[k++][0] = 1;
	}
	int l = 0;
	while(!b[0][1]&&l<=m)
	{
		a[0][l++] = 1;
	}
	for(int i =1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(b[i][j])	a[i][j] = 0;
			else a[i][j] = a[i-1][j]+a[i][j-1];
		cout << a[n][m];
	return 0;
 } 
