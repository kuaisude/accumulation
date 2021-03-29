/*5
1 -2 3 1 -4
*/

#include<iostream>
const int MAXN = 100001;
using namespace std;
int main()
{
	int a[MAXN];
	int n,i,j,k;
	int maxsum;
	int temp;
	cin>>n;
	for(i = 1;i<=n;i++){
		cin>>a[i];
	}
	maxsum = a[1];
	for(i = 1;i<=n;i++)
		for(j = i;j<=n;j++)
		{
			temp = 0;
			for(k = i;k<=j;k++)
			{
				temp = temp + a[k];
			}
			if(maxsum<temp)
			{
				maxsum = temp; 	
			}
		} 
	cout << maxsum;
	return 0;	
}
