#include<iostream>
using namespace std;
const int maxn = 10000001;
int prime[maxn],num = 0;
bool p[maxn] = {0};
int main()
{
	int m,n,count = 0;
	cin>>m>>n;
	for(int i = 2;i<maxn;i++)
	{
		if(p[i] == false){
			prime[num++] = i;
			if(num >= n)	break;
			for(int j = i + i;j<maxn; j += i)
			{
				p[j] = true;
			}
		}
	}
	
	for (int i = m;i<=n;i++)
	{
		cout<<prime[i-1];
		count ++ ;
		if(count%10 != 0 && i<n){
			cout<<" ";
		}else{
			cout<<endl;
		}
	}
	
	
} 
