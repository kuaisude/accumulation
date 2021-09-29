#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
	return a > b;
}


int main()
{
	int n,b;
	cin >> n >> b;
	int ans[n];
	for(int i = 0;i<n;i++){
		cin >> ans[i];
	}
	sort(ans,ans+n,cmp);
	int i = 0;
	while(b > 0){
		b -= ans[i];
		i++;
	}
	cout << i << endl;
	
	
	
	return 0;
 } 
