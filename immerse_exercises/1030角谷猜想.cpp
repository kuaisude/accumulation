#include<iostream>
using namespace std;
int main()
{
	long long n = 0,count = 1;
	cin >> n;
	while(n!=1){
		if(n%2 == 0) n /= 2;
		else n = 3*n + 1;
		count ++;
	}
	cout << count << endl;
}
