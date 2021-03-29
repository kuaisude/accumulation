#include<iostream>
#include<cstring>
using namespace std;
const int MAXN = 100010;
const int K = 1001;
int main(){
	int a[MAXN],c[K];
	int n;
	cin >> n;
	memset(c,0,sizeof(c));
	for(int i = 0;i<n;i++){
		cin>>a[i];
		c[a[i]] = c[a[i]]+1;
	}
	
	for(int i = 0;i<K;i++)
		for(int j = 1;j<=c[i];j++){
			cout<<i<<" ";
		}
	
	return 0;
}
