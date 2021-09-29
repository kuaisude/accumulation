#include<iostream>
#include<cstdio>
using namespace std;

int cnt,n = 0;
int a[31]; // a[3] = 7»ÊºóµÄÎ»ÖÃ 

bool check(int x,int y)
{
	for(int i = 1;i<x;i++){
		if(a[i] == y) return false;
		if(a[i] + i == x + y) return false;
		if(a[i] - i == y - x) return false;
	}
	
	return true;
}

void dfs(int row){
	if(row == n+1){
		cnt ++ ;

		
		return; 
	}
	for(int i = 1;i<=n;i++){
		if(check(row,i)){
			a[row] = i;
			dfs(row + 1);
			a[row] = 0;
		}
	} 
	return;	
}

int main(){
	cin >> n;
	dfs(1);
	cout << cnt << endl; 
	return 0;
}
