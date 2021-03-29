/*
for—≠ª∑test(1) - 1

*/

#include<iostream>
using namespace std;
int main(){
	int i,n = 0;
	for(i = 1;i<=100;i = i*3)
	{
		if(i%7 == 0)
		{
			n++;	
		}	
	}
	cout<<n<<endl;
	return 0;
} 
