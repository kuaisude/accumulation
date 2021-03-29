/*
求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。
要求输出的结果总宽度占10位，其中小数部分为8位。
程序中使用浮点型数据时，请定义为双精度double类型。
如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，如求x的绝对值，则为fabs(x).

输入
无

输出
PI=圆周率的近似值

输出的结果总宽度占10位，其中小数部分为8位。

末尾输出换行。

pi/4 = 1-1/3+1/5-1/7+1/9-1/11..........+1/n; 
*/

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int x,z;	
	double y;
	y=0;
	z=0;
	for(x=1;fabs(1.0/x)>1e-6;x+=2)
	{
		z=z+1;
		if(z%2!=0)
		{
		y=y+1.0/x;
		}
		else
		{
		y=y-1.0/x;
		}
	}
	y=y*4;
	
	cout << fixed<<setprecision(10)<<right << setw(10) <<y<<endl; 
	return 0;

}
