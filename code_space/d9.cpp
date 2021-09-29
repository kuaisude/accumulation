#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec;
	int a[5] = {0};
	int *p;
	p = a;
	//memset(a,-1,sizeof(a));
	a[0] = 233;
	a[1] = 466;
	cout << p << endl;
	cout << ( *(p+1) )<< endl;
	return 0;
}
