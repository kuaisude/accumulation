#include<iostream>
#include<cstdio>
using namespace std;
int n,cnt;//n皇后，cnt计数次数 
int a[40]  = {};

bool check(int x,int y){
	for(int i = 1;i < x;i++){
		if(a[i] == y) return false;
		if(a[i] + i == x + y)	return false;
		if(a[i] - i == y - x) return false;	
	}	
	return true;
	
}


void dfs(int row){
	if(row >= n){
		cnt++;
		return;
	} 
	for(int i = 1;i<=n;i++){
		if(check(row,i)){
			a[row] = i;
			dfs(row + 1);
			a[row] = 0;
		}
		
	}
	return ;	
}

int main()
{
	cin >> n;
	dfs(1);
	cout << cnt;
	return 0;
}
