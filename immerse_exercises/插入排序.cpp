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


	for(int i = 1;i < n;i++)
	{
		int tmp = a[i],j = i;
		while(j > 0 && a[i] < a[j-1]){
			a[j] = a[j - 1];
			j--;
		}
		a[j] = tmp;
	}
	
	
	for(int i = 0;i<10;i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;


} 
