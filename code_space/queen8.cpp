#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool vis[10][10];
bool tmp[10][10];
static const int move[8][2] = {{1,1},{1,0},{0,1},{-1,-1},{-1,0},{0,-1},{1,-1},{-1,1}};
int sum = 0,n=0;
int ans[14];

void backup(){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			tmp[i][j] = vis[i][j];
		}
	}
	return ;
}

void recover(){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			vis[i][j] = tmp[i][j];
		}
	}
	return;
}

void put_Q(int x,int y)
{
	vis[x][y] = true;
	for(int i = 1;i<n;i++){
		for(int j = 0;j<8;j++){
			int dx = x + move[j][0] * i;
			int dy = y + move[j][1] * i;
			
			if(dx >= 0 && dx < n && dy >= 0 && dy < n){//ÆåÅÌ·¶Î§ÄÚ 
				vis[dx][dy] = true;
			}
			
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout << vis[i][j] << " "; 
		}
		cout << endl;
	}
	cout << endl;
	return ;
	
}

void eq(int line)
{
    if(line>n)
    {
		sum++;
		for(int i = 1;i<=n;i++){
			cout << ans[i]<<" ";
		}
		cout << endl;
		return;
        
    }
    for(int i=1;i<=n;i++)
    {
        if((vis[ i ][ line ]))
        {
            ans[line]=i;
            backup();
            put_Q(i,line);
            eq(line+1);
            recover();
        }
    }
}
int main()
{
	int n;
	cin >> n;
	memset(ans,0,sizeof(ans));
	memset(vis,0,sizeof(vis));
	memset(tmp,0,sizeof(tmp));
	

	eq(0);

	cout << sum << endl;
	
	return 0;
	
}
