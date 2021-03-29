#include<iostream>
#include<cmath>
//#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,n;
	double s;
	cin >> a >> b >> c >> n;
	s = pow(a,n)+pow(b,n)+pow(c,n);
	cout << "s=" << s <<endl;
	return 0;
}
