#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define random(a,b) (rand()%(b-a)+a) 
int main()
{
	int a[10],n = 10;
	srand((int)time(0));
	for(int i = 0;i<10;i++)
	{
		a[i] = random(100,200);
		cout << a[i] << ' ';
	}
	cout << endl;

	for(int i = 0;i<n-1;i++)
	{
		int k = i;
		for(int j = i;j<n;j++)
		{
			if(a[k] > a[j]){
				k = j;
			}
		}
		int tmp = a[k];
		a[k] = a[i];
		a[i] = tmp;
	}
	
	for(int i = 0;i<10;i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;

}
