/*��Ŀ����
���ʵ����1+2+3+...�͵ĳ���Ҫ��õ�ʹʹ��������1000����С��������

����
��
���
���ʹ1+2+3+...+N>1000����С������N��ĩβ������С�
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


