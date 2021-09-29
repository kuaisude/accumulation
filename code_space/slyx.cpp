#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	char ans[m+2][n+2];
	int vis[m+2][n+2];
	memset(ans,0,sizeof(ans));
	memset(vis,0,sizeof(vis));
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			cin >> ans[i][j];
			if(ans[i][j] == '*'){
				vis[i][j] = -9;
				if(ans[i][j-1]!='*'){
					vis[i][j-1]++;
				}
				if(ans[i-1][j]!='*'){
					vis[i-1][j]++;
				}
				if(ans[i][j+1]!='*'){
					vis[i][j+1]++;
				}
				if(ans[i+1][j]!='*'){
					vis[i+1][j]++;
				}
				if(ans[i+1][j+1]!='*'){
					vis[i+1][j+1]++;
				}
				if(ans[i-1][j+1]!='*'){
					vis[i-1][j+1]++;
				}
				if(ans[i+1][j-1]!='*'){
					vis[i+1][j-1]++;
				}
				if(ans[i-1][j-1]!='*'){
					vis[i-1][j-1]++;
				}
			}
		}
	}
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
//			cout << ans[i][j];
			if(vis[i][j] < 0)	cout << '*';
			else	cout << vis[i][j] ;
		}
		cout << endl;
	}
	
	
	return 0;
 } 
