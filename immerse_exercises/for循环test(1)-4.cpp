/*
for—≠ª∑test(1)-4


*/

#include<iostream>
using namespace std;
int main(){
	int n,i;
	for(i = 1;i<=100;i++)
	{
		n = i;
		if(++n%2 == 0)
		if(++n%3 == 0)
		if(++n%7 == 0)
		cout<<i<<":"<<n<<endl;
	}
	return 0;
} 
