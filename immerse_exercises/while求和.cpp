/*求1+2+3+...+100，即求



要求用while语句实现
*/
#include<iostream>
using namespace std;
int main()
{
	int number, sum;
	sum=0;
	number=1;
	while (number<=100)
	{
	sum=sum+number;
	number++;
	}
	cout<<sum<<endl; 
	return 0;
}
