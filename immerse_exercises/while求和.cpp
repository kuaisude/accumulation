/*��1+2+3+...+100������



Ҫ����while���ʵ��
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
