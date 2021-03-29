#include<iostream>
using namespace std;
typedef unsigned int uint;

uint foo(uint n)
{
	if(n==1)
	{
		return 10;
	}
	else
	{
		return foo(n-1)+10*(n-1)+9;
	}
}

int main(void)
{
	
	uint n;
	cin>>n;
	n=n/100;
	cout<<foo(n)<<endl;
	
	return 0;
}
