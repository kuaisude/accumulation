#include<iostream>
#include<algorithm>
using namespace std;

int a[110] = {0};
//������ʵ��Լɪ������ 
int main()
{
	int n,k;
	int cnt = 0,i = 0,c = 0;//cnt��ʾĿǰ���ֵ����� 
	cin >> n >> k; //��ʾ�ܹ���n�ˣ���������k 
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
				c = 0;//���k,���´�1��ʼ�� 
			}
		}
	}
	
	return 0;
	 
} 
