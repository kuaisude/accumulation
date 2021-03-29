/*
4-29
把一个合数分解成若干个质因数乘积的形式（即求质因数的过程）叫做分解质因数。
分解质因数（也称分解素因数）只针对合数。

输入样例：
	36
输出样例：
	36 = 2*2*3*3 
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	cout<<n<<"=";
	do
	{
		while(n%i == 0)
		{
			cout<<i;
			n/=i;
			if(n!=1)
			{
				cout<<"*";
			}
		}
		i++;
	}while(n!=1);
	return 0; 
} 

