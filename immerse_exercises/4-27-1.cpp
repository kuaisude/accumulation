/*
4-27
��Ǯ��ټ�������һ��ֵǮ�壬��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ���
�ʼ��̣���ĸ����������Σ�

����һ 
 
*/

#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	for(x = 0;x<=100/5;x++)
		for(y = 0;y<=100/3;y++)
			for(z = 0;z<=3*100;z++)
			{
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
	return 0; 
} 

