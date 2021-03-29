/*
4.7已知n个人的身高值，求出其中的最大值。

 



*/

#include<iostream>
using namespace std;
int main(){
	int i,n;
	float x,max = 0;
	cin>>n;
	for(i = 1;i<=n;i++)
	{
		cin>>x;
		if(x>max)
		{
			max = x;
		}	
	} 
	cout<<max<<endl;
	return 0;
} 



