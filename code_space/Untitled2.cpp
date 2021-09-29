#include<iostream>
#include<vector>
#include<cstring>
#include <algorithm>
#include<queue>
using namespace std;
int main(){
	int n,w;
	cin >> n >> w;
	priority_queue<int> left;//大根堆 
	priority_queue<int,vector<int>,greater<int> > right;//小根堆
	for(int i = 1;i<=n;i++){
		int x;
		cin >> x;
		if(right.empty() || x >= right.top())	right.push(x);
		else	left.push(x);
		int k =  max(1,i*w / 100);
		while(right.size() > k) left.push(right.top()),right.pop();
		while(right.size() < k) right.push(left.top()),left.pop();
		cout << right.top() << " ";
	} 
	return 0;
	
	
	
}
