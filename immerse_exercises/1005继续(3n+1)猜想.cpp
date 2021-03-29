#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<vector>
#include<cstdio>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main()
{
	int n,tmp,flag = 0;
	cin >> n;
	vector<int> m(n);
	for(int i = 0;i<n;i++)
	{
		cin >> tmp;
		m[i] = tmp;
	}
	for(int i = 0;i<n;i++)
	{
		if(m[i]){
			tmp = m[i];
			while(tmp!=1)
			{
				if(tmp%2 == 1)
					tmp = 3*tmp + 1;
				tmp /= 2;
				for(int j = 0;j<n;j++)
				{
					if(tmp == m[j] && m[j]!=0)
						m[j] = 0;
				}
			}			
		}	
	}
	sort(m.begin(),m.end(),cmp);
	
	for(int i = 0 ; i<n ; i++)
	{
		if(m[i]){
			if(flag == 1)
				cout << ' ';
			cout << m[i];
		}
		flag = 1;
	}
	return 0;
}
