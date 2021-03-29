#include<iostream>
#include<algorithm>
using namespace std;

int a[110] = {0};
//用数组实现约瑟夫环问题 
int main()
{
	int n,k;
	int cnt = 0,i = 0,c = 0;//cnt表示目前出局的人数 
	cin >> n >> k; //表示总共有n人，数到数字k 
	while(cnt!=n)
	{
		i++;
		if(i > n) i = 1;
		if(a[i] == 0)
		{
			c++;
			if(c == k)
			{
				a[i] = 1;
				cnt ++;
				cout << i - 1 << " ";
				c = 0;//清空k,重新从1开始数 
			}
		}
	}
	
	return 0;
	 
} 
