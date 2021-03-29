#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int a[5][5];
	int z,h;
	z = 0;h = 0;
	memset(a,0,sizeof(a));
	for(int i = 1;i <= 4;i++)
		for(int j = 1;j <= 4;j++)
		{
			cin >> a[i][j];
			if(i == j)
				z += a[i][j];
			if(i + j == 5)
				h += a[i][j];
		}
	cout << z << ' ' << h << endl;
	return 0;
}
