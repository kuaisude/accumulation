/*����һ��������N����1+2+...+N������


Ҫ���ڳ�����ʹ��break��䡣
*/

#include<iostream>
using namespace std;
int main()
{
	int number, sum;
	sum=0;
	number=1;
 	while(1)
	{
 		sum += number;
 		number++;
 		if (number > 100)
		{
 			break;
		}
	}
	cout<<sum<<endl; 
	return 0;
}
