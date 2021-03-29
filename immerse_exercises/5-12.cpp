#include<iostream>
using namespace std;
int main()
{
	int a[10] = {6,2,5,5,4,5,6,3,7,6},k = 0,ans = 0,temp = 0;
	int num[2020];
	int n;
	cin >> n;
	num[0] = 6;
	for(int i = 1;i<=2000;i++)
	{
		k = i;
		while(k)
		{
			temp += a[k%10];
			k /= 10;
		}
		num[i] = temp;
		temp = 0;
	}
	for(int i = 0;i<=999;i++)
		for(int j = 0;j<=999;j++)
		{
			if(num[i]+num[j] >= n)
			{
				continue;
			}else
			{
				if(num[i+j]+num[i]+num[j]+4 == n)
				{
					ans++;
				}
			}
		}
	cout<<ans;
	return 0;	
	
 } 
