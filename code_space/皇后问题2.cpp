#include<iostream>
using namespace std;
int cnt = 0,n = 0;
int a[40] = {}; // �±����y,�ڴ����Ϊx 
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
		if(check(i,row))//������һ�����Է��ûʺ� 
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
