#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a,count = 0;
	cin >> a;
	if(a == 1)
	{
		cout << 1 << endl;
	}else{
		int i = 1;
		float an = sqrt(a);
		for(i = 1;i <= an;i++)
		{
			if(a%i == 0)
			{
				if(i == an){
					count ++;
				}else
					count += 2 ;
			}
		}
		cout << count  << endl;
	}
	return 0;
} 
