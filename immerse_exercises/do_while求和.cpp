/*求1+2+3+...+100，即求



要求用do...while语句实现
*/
#include<iostream>
using namespace std;
int main()
{
	int number, sum;
	sum=0;
	number=1;
	do 
	{
	sum=sum+number;
	number++;
	}while (number<=100);
	cout<<sum<<endl; 
	return 0;
}
