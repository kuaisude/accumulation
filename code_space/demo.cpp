#include<iostream>
#include<cstring>
#define MAX 100000
using namespace std;
long long ans[MAX];
int vis[MAX];
int n;
void dfs(int a,int n){
	if(a == -1){
		return;
	}else{
	for(int i = 0;i+a<n;i++){
		for(int j = i;j<=i+a;j++){
			vis[j]++;
		}
	}	
	dfs(a-1,n);
	}
}

int main()
{
	long long count = 0;
	cin >> n;

	memset(ans,0,sizeof(ans));
	memset(vis,0,sizeof(vis));
	
	dfs(n,n);
	
	for(int i = 0;i<n;i++){
		cin >> ans[i];
		count += (ans[i]*vis[i])%1000000007;
//		cout << vis[i] << " ";
	}
	cout << count << endl;
	
	
	return 0;
 } 
