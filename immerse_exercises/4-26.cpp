/*
4-26
���ڸ�������Ȼ��n(n<20),����Ļ��������С�*�����ɵ�n�е�ֱ��������

���磺��n = 4ʱ�������
*
**
***
****
*****
 
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i =1 ;i<=n;i++)
	{
		for(j = 1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	} 
	return 0; 
} 

