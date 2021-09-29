#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int temp,count = 0,ma = -1;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> temp;
		ma = max(temp,ma) ;
	}	
	for(int i = 1;i<=ma;i<<=1){
		count |= i;
	}
	cout << count << endl;
	return 0;
 } 
