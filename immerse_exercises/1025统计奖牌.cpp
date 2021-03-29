#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,temp;
	int count[3];
	cin >> n;
	memset(count,0,sizeof(count));
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cin >> temp;
			count[j] += temp;
		}
	}
	for(int i = 0;i<3;i++)
		cout << count[i] << ' ';
	cout << count[0] + count[1] + count[2] << endl;
	return 0;
}
