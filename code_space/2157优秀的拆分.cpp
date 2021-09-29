#include<iostream>
#include<vector>
using namespace std;
int table[100];
int main()
{
	int n,len = 1;
	vector<int> vec;
	cin >> n;
	table[0] = 1;
	for(int i = 1;table[i-1]<=n;i++){
		table[i] = table[i-1]*2;
		len = i;
	}
	while(n > 0){
		int i = 1;
		for(;i<len;i++){
			if(n < table[i])	break;
			
		}
		vec.push_back(table[i-1]);
		n -= table[i-1];
		len = i;
	}
	if(*(vec.end() - 1) == 1){
		cout << -1 << endl;
	}else{
		for(int i = 0;i<vec.size();i++){
			cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
 } 
