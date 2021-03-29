/*
4.12在银行取款时，我们需要输入密码（由六位数字组成）。密码正确，才可以进行取款操作；
若连续三次输入密码错误，就会冻结账号。现在，请你编写一个程序，模拟输入密码的过程。

输入格式：
	每次输入六位数字
输出格式：
	给出提示信息：正确、错误、冻结	


*/

#include<iostream>
using namespace std;
int main(){
	int mima = 201912;
	int x = 0,n = 0;
	while(n<3&&x!=mima)
	{
		n++;
		cin>>x;
		if(x!=mima)
		{
			cout<<"错误"<<endl;
		}	
	}
	if(x == mima)
	{
		cout<<"正确"<<endl; 
	}else if(n == 3)
	{
		cout<<"冻结"<<endl;
	}
	return 0; 
} 
