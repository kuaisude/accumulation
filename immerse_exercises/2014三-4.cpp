//���룺30 
#include<iostream>
using namespace std;
const int SIZE = 100;
int main()
{
	int p[SIZE];
	int n,tot,i,cn;
	tot = 0;
	cin >> n;
	for(i = 1;i <= n; i++)	p[i] = 1;
	for(i = 2;i <= n; i++){
		if(p[i] == 1)	tot++;
		cn = i*2;
		while(cn <= n){
			p[cn] = 0;
			cn += i;
		}
	} 
	cout << tot << endl;
	return 0;
}
