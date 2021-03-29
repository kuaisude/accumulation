/*输入一个正整数N，求1+2+...+N，即求


要求在程序中使用break语句。
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
