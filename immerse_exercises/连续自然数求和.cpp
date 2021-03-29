/*题目描述
编程实现求1+2+3+...和的程序，要求得到使使和数大于1000的最小正整数。

输入
无
输出
输出使1+2+3+...+N>1000的最小正整数N，末尾输出换行。
*/

#include<iostream>
using namespace std;
int main()
{
	int number, sum;
	sum=0;
	number=0;
 	do
	{
		number++;
		sum += number;
	}while(sum<=1000);
	cout<<number<<endl; 
	return 0;
}


