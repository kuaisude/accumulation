/*
4-23
���ڸ�������Ȼ��n�����1~n֮���ȫ������ 
*/

#include<iostream>
using namespace std;
int main(){
	int n,m,i;
	cin>>n;
	for(m = 2;m<=n;m++)
	{
		i = 2;
		while(m%i!=0&&i<=m-1)
		{
			i++;
		}
		if(i>m-1)
		{
			cout<<m<<" ";
		}
	} 
	return 0; 
} 

