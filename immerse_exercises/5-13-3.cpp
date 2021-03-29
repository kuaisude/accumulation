#include<iostream>
const int MAXN = 100001;
using namespace std;
int main()
{
	int a[MAXN];
	int n,i;
	int ans;
	int t;
	cin>>n;
	for(i = 1;i<=n;i++){
		cin>>a[i];
	}
	ans = a[1];
	t = ans;
	for(i = 2;i<=n;i++)
	{
		if(t>=0){
			t = t+a[i];
		}else{
			t = a[i];
		}
		if(t>ans){
			ans = t;
		}
	}
	cout<<ans;
	return 0;
	
}
