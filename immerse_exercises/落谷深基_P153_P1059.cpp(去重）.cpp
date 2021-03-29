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
	cnt = unique(a,a+n) - a;
	cout << cnt << endl;
	sort(a,a+cnt,cmp) ;
	for (int i = 0;i<cnt;i++) cout << a[i] <<' ';
	return 0;
}
