#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
/*
A1 = �ܱ� 5 ����������������ż���ĺͣ�
A2 = ���� 5 ������ 1 �����ְ�����˳����н�����ͣ������� n������ n1-n2+n3-n4...
A3 = �� 5 ������ 2 �����ֵĸ�����
A4 = �� 5 ������ 3 �����ֵ�ƽ��������ȷ��С����� 1 λ��
A5 = �� 5 ������ 4 ��������������֡�
*/
int main()
{
	int n = 0,temp = 0,count = 0,ttt = 0;
	bool flag = 1;
	float a[5];
	memset(a,0,sizeof(a));
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> temp;
		switch (temp%5){
			case 0:{
				if(temp%2 == 0){
					a[0] += temp;
				}
				break;
			}
			case 1:{
				if(flag){
					a[1] += temp;
					flag = 0;
				}
				else{
					a[1] -= temp;
					flag = 1;
				}
				ttt ++;
				break;
			}
			case 2:{
				a[2]++;
				break;
			}
			case 3:{
				a[3] += temp;
				count++;
				break;
			}
			case 4:{
				if(a[4]<temp){
					a[4] = temp;
				}
				break;
			}
		}
	}
	
	
	if(a[0] == 0)
	{
		printf("%c",'N');
	}else
	{
		cout<<a[0];
	}
	
	if(ttt == 0)
	{
		printf(" %c",'N');
	}else
	{
		cout<<" "<<a[1];
	}
	
	for (int i = 2;i<5;i++)
	{
		if(a[i] == 0.0)
		{
			printf(" %c",'N');
		}else if(i == 3)
		{
			a[3] = a[3]/count;
			printf(" %.1f",a[i]);
		}else
		{
			printf(" %.0f",a[i]);
		}
	}
	
	return 0;
	
}
