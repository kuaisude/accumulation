/*
��Բ����PI�Ľ���ֵ��ֱ������ĳһ��ľ���ֵС��10-6Ϊֹ������ۼӣ���
Ҫ������Ľ���ܿ��ռ10λ������С������Ϊ8λ��
������ʹ�ø���������ʱ���붨��Ϊ˫����double���͡�
�����Ҫ�������ֵ������ʹ��C������ѧ���ṩ�ĺ���fabs������x�ľ���ֵ����Ϊfabs(x).

����
��

���
PI=Բ���ʵĽ���ֵ

����Ľ���ܿ��ռ10λ������С������Ϊ8λ��

ĩβ������С�

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
