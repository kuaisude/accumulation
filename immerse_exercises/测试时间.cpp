#include<iostream>
#include<ctime> 
using namespace std;

clock_t start,stop;

void MyFunction(){
	int i = 0;
	while(i<10000){
		i++;
	}
}

double duration;
int main()
{
	start = clock();
	MyFunction();
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	cout << duration << endl;
	return 0;
 } 
