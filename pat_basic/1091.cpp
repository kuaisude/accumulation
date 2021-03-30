#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int N = 1;
bool is_zss(int x)
{
	N = 1;
	int w = 0;
	int a = x;
	while(a!=0){
		if(a!= 0){
			w++;
			a /= 10;
		}
	}
	//cout << w << endl;
	w = pow(10,w);
	for(int j = 1;j<10;j++){
		int G = j*x*x;
//		cout <<G <<endl;
//		cout << w << endl;
		if(x != G%w){
			continue;
		}else{
			N = j;
			return 1;
		}
		//cout << endl;
	}
	return 0;
}



int main()
{
	int n,a;
	cin >> n;
	for(int i = 0;i <n;i++){
		cin >> a;
		if(is_zss(a)){
			cout << N << ' '<< N*a*a <<endl;
		}else{
			cout << "No" << endl;
		}
	}
 } 
