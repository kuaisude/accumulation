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
	return 0;
}
