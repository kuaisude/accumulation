#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n+1];//下标号的猴子，是否出局
	memset(a,-1,sizeof(a));
	
	int l = 0;//报数猴子的位置 
	for(int i = 1;i<n;i++)
	{
		int k = 0;//报数猴子喊的数 
		while(k < m)
		{
			l++;
			if(l > n)	l = 1; 
			if(a[l]) k++;
		}
		a[l] = 0;			
	} 
	
	for(int i = 1;i<=n;i++)
	{
		if(a[i]) cout << i << endl;
	}
	
	return 0;	 
}
