#include<iostream>
#include<cstring>
#include<algorithm> 
#include<vector>
using namespace std;

bool cmp(int a,int b)
{
	return a>b	;
}


int main()
{
	int n,w,index = 0;
	vector<int> vec;
	cin >> n >> w;
	for(int i = 0;i<n;i++){
		int temp;
		cin >> temp;
		vec.push_back(temp);
		sort(vec.begin(),vec.end(),cmp);
		index = max(1,(i+1)*w/100) - 1;
		cout << vec[index] << " ";	
	}
	return 0;
}
