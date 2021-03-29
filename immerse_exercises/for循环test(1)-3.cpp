/*
for—≠ª∑test(1)-3 



*/

#include<iostream>
using namespace std;
int main(){
	int n;
	for(n = 1;n<=5;n++)
	{
		switch(n%5)
		{
			case 0:cout<<n<<"@"<<endl;break;
			case 1:cout<<n<<"#"<<endl;break;
			default:cout<<n<<endl;
			case 2:cout<<n<<"$"<<endl;break;
		}
	}
	return 0;
} 
