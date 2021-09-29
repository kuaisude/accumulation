#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,sc,bu[101];
	cin >> n;
	memset(bu,0,sizeof(bu));
	for(int i = 0;i<n;i++){
		cin >> sc;
		bu[sc]++;
	}
	for(int i = 100;i >= 0;i--){
		for(int j = 0;j<bu[i];j++){
			cout << i <<" ";
		}
	}
	
	return 0;
	
}
