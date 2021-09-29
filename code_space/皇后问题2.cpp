#include<iostream>
using namespace std;
int cnt = 0,n = 0;
int a[40] = {}; // 下标代表y,内存的数为x 
bool check(int x,int y)
{
	for(int dy = 1;dy < y;dy++){
		if(a[dy] == x) return false;
		if(a[dy] - dy == x + y ) return false;
		if(a[dy] - dy == x - y) return false;
	}

	return true;
}
void dfs(int row){
	if(row > n){
		cnt++;
		return ;
	}
	for(int i = 1;i<=n;i++){
		if(check(i,row))//此行有一个可以放置皇后 
		{
			a[row] = i ;
			dfs(row+1);
			a[row] = 0;
			
		}	
	}
	return ; 
} 
int main()
{
	cin >> n;
	dfs(1);
	cout << cnt << endl;	
	return 0;
 } 
