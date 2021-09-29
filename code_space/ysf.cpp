#include<bits/stdc++.h>
using namespace std;
int a[101] = {};
int main()
{
	int n,m;
	int cnt = 0,i = 0,k = 0;
	cin >> n >> m;
	while(cnt != n)
	{
		i++;
		if(i>n) i = 1;
		if(a[i] == 0)
		{
			k ++ ;
			if(k == m)
			{
				a[i] = 1;
				cnt ++;
				cout << i-1 << " ";
				k = 0;
			 } 
		} 
	}
	
	return 0;
}
