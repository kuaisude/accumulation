#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;

int main()
{
	int a[3] = {1,2,3};
	int b[3] = {1,2,3};
	int c[10] = {0};
	int k = 0;
	

	
	for(int i = 0;i<10;i++)
	{

		while(a[k]<=0&&k<3){
			k++;
		}
		
		c[i] = b[k];
		a[k]--;

	}
	
	
	for(int i = 0;i<6;i++)
	{
		cout << c[i] << endl;
	}
	return 0;
}
