#include<iostream>
using namespace std;
int main()
{
	int a,b,f;
	cin >> a >> b;
	f = a*b;
	bool sign = 0;
	while(f){
		if((f%10))
			sign = 1;
		if(sign)
			cout << f%10 ;
		f /= 10;		
	}
	cout << endl;
	return 0;
}
