#include<iostream>
#include<algorithm>
using namespace std;
int const MAXN = 1010;
int a[MAXN],ans[MAXN],n,cnt = 0,tmp = -1;
bool cmp(int a,int b)
{
	return a > b;
} 
int main()
{
	cin >> n;
	for (int i = 0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i = 0;i < n;i++){
		if(a[i] != tmp) ans[cnt++] = a[i];
		tmp = a[i];
	}
	cout << cnt << endl;
	for (int i = 0;i<cnt;i++) cout << ans[i] <<' ';
	return 0;
}
