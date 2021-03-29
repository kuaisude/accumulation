#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define random(a,b) (rand()%(b-a)+a) 
int main()
{
	int a[10];
	srand((int)time(0));
	for(int i = 0;i<10;i++)
	{
		a[i] = random(100,200);
		cout << a[i] << ' ';
	}
	cout << endl;
	int n = 10; 
	for(int i = 0;i<n-1;i++)
	{
		for(int j = 0;j<n-i-1;j++)
		{
			if(a[j] > a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for(int i = 0;i<10;i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}
