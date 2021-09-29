#include<bits/stdc++.h>
using namespace std;
int ysf(int n,int k ,int i)
{
	if(i == 1)
		return (n+k-1)%n;
	else	
		return (ysf(n-1,k,i-1) + k)%n;
}

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cout<<ysf(n,m,i) << " ";
	}
	cout << endl;
}
