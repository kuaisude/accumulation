#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int v[4] = {0,1500,3000,2000};
	int w[4] = {0,1,4,3};
	int dp[10][10] = {0};
	for(int i = 1;i <4;i++)//物品 
	{
		for(int j = 1;j <=4;j++)//包容量
		{
			if(j >= w[i])
			{
				dp[i][j] = max(v[i] + dp[i-1][j-w[i]],dp[i-1][j]);	
			}else
				dp[i][j] = dp[i-1][j];
			
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
 } 
