#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	return !b ? a : gcd(b,a%b);
}

int main()
{
	int m,n;
	cin >> m >> n;
	if (gcd(m,n) == 1){
		cout << "Yes" << endl;
	}else
	{
		cout << "No" << endl;
	}
 } 
