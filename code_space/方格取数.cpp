#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
long long flag[2000][2000],flag2[2000][2000];
long long dis[2000][2000],dp[2000][2000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>dis[i][j];
	dp[1][1]=dis[1][1];
	for(int i=2;i<=n;i++)
		dp[i][1]=dis[i][1]+dp[i-1][1];//��ʼ�� 
	for(int j=2;j<=m;j++)
	{
		flag[1][j]=dp[1][j-1]+dis[1][j];
		flag2[n][j]=dp[n][j-1]+dis[n][j];
		for(int i=2;i<=n;i++)
			flag[i][j]=max(flag[i-1][j],dp[i][j-1])+dis[i][j];//����������һ�� 
		for(int i=n-1;i>=1;i--)
			flag2[i][j]=max(flag2[i+1][j],dp[i][j-1])+dis[i][j];//����������һ�� 
		for(int i=1;i<=n;i++)
			dp[i][j]=max(flag[i][j],flag2[i][j]);//ȡ���ֵ 
	}
	cout<<dp[n][m];
	return 0;
}
