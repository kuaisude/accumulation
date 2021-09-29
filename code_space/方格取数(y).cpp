#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N = 1010;

int n,m;
int w[N][N];
LL f[N][N];

int main()
{
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j<=m;j++){
			cin >> w[i][j];
		}
	}
	memset(f,-0x3f,sizeof(f));
	f[1][0] = 0;
	for(int j = 1;j <= m;j++){
		LL s = -1e18;
		for(int i = 1;i<=n;i++){
			s = max(s,f[i][j-1]) + w[i][j];
			f[i][j] = max(f[i][j],s);
		}
		s = -1e18;
		for(int i = n;i;i--){
			s = max(s,f[i][j-1]) + w[i][j];
			f[i][j] = max(f[i][j],s);
		}
	}
	cout << f[n][m] << endl;
	
	return 0;
}
