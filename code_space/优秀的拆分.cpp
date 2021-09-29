#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n%2 == 1)	puts("-1");
	else{
		for(int i = 23;i>=0;i--){
			if(n >> i & 1)
				cout << (1 << i) << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
