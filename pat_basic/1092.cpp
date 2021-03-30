#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstring>
using namespace std;
const int M = 101;
const int N = 1001;
int ans[M][N];

int main()
{
	int city = 0,kind = 0;
	cin >> kind >> city;
	for (int i = 1;i<=city;i++){
		for(int j = 1;j<=kind;j++){
			cin >> ans[i][j];
			ans[0][j] += ans[i][j];
		}
	}
	
	int max = ans[0][1];
	int flag = 0;
	for(int i = 1;i<=kind;i++){
		if(max <= ans[0][i]){
			max = ans[0][i];
			flag = i;
		}
	}
	cout << max << endl;
	for(int i =1;i<=kind;i++){
		if(max == ans[0][i]&&flag!=i){
			cout << i<<" ";
		}
	}
	cout<< flag << endl;
	return 0;
}
