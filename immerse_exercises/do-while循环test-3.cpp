/*
do...while循环题test-3

无输入 
*/

#include<iostream>
using namespace std;
int main(){
	int i= 1,s = 3;
	do
	{
		s += i++;
		if(s%7!=0)
		{
			++i;
		}
	}while(s<15);
	cout<<i;
	return 0; 
} 

