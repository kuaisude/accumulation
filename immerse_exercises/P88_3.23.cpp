#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	float x,y;
	scanf("%f %f",&x,&y);
	n = 100*x/y + 0.5;
	switch(n/10)
	{
		case 0:
		case 1:printf("���主ԣ\n");break;
		case 2:printf("��ԣ\n");break;
		case 3:printf("��Ը�ԣ\n");break;
		case 4:printf("С��\n");break;
		case 5:printf("�±�\n");break;
		default:printf("ƶ��\n");break;		
	}	 
	return 0;
}
