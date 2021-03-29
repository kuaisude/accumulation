/*求1+2+3+...+100，即求



要求用for语句实现 
*/

#include<iostream>
using namespace std;
int main()
{
	int number, sum;
	sum=0;
	number=1;
	for(int i = 1;i<=100;i++)
	{
		sum += i; 
	}
	cout<<sum<<endl; 
	return 0;
}
