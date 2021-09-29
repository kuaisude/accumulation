#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
	int n;
	int temp,count = 0;
	priority_queue<int,vector<int>,greater<int> > ma;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> temp;
		count |= temp;
		int cmp = 0;
		while(temp){
			temp >>= 1;
			cmp++;
		}
		ma.push(cmp);
		if(ma.size() > 2){
			ma.pop();
		} 
	}	
	int a = ma.top();
	ma.pop();
	if(a == ma.top()){
		int ans = (1<<a) - 1;
		cout << ans << endl;	
	}else{
		cout << count << endl;
	}
	return 0;
 } 
