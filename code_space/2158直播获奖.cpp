#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int grade[100];
bool cmp(int a,int b){
	return a > b;
}
int main()
{
	int n,w,index = 0;
	vector<int> vec;
	cin >> n >> w;
	for(int i = 0;i<n;i++){
		cin >> grade[i];
		vec.push_back(grade[i]);
		sort(vec.begin(),vec.end(),cmp);
		index = max(1,(i+1)*w/100);
		cout << vec[index-1] << " ";
	}

	return 0;	
}
