/*�������4*5�ľ���

  1  2  3  4  5

  2  4  6  8 10

  3  6  9 12 15

  4  8 12 16 20

Ҫ��ʹ��ѭ��ʵ�֣�ע��ÿ�����5�����֣�ÿ������ռ3���ַ��Ŀ�ȣ��Ҷ���


*/

#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	for(int i = 1;i<=4;i++)
	{
		for(int j = 1;j<=5;j++)
			cout << right << setw(5) <<i*j;
		cout << endl;
	}
	return 0;
}




