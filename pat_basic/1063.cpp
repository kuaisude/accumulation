#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n][2];//0是实部，1是虚部；
	int temp = 0;
	memset(a,0,sizeof(a));
	for(int i = 0;i < n;i++ ){
		cin >> a[i][0] >> a[i][1];
		int cmp = a[i][0] * a[i][0] + a[i][1] * a[i][1];
		if(cmp > temp){
			temp = cmp;
		}
	}
	double ans = 0;
	
	ans = sqrt(temp);
	
	printf("%.2f",ans);
	return 0;
}
