#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,score;
	double ave;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> score;
		ave += score;
	}
	ave /= n;
	printf("%.2lf",ave);
	return 0;
}
