#include<iostream>
using namespace std;
int main()
{
	string ans,temp;
	long long n = 0;
	cin >> ans >> n;
	while(ans.size() < n){
		temp.push_back(ans[ans.size()-1]);
		for(int i = 0;i<ans.size() - 1;i++){
			temp.push_back(ans[i]);
		}
		ans += temp; 
		temp.clear();
	}

	cout << ans[n-1] << endl;
	
	return 0;
}
