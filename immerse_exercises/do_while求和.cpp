/*��1+2+3+...+100������



Ҫ����do...while���ʵ��
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
