#include<bits/stdc++.h>
#include<algorithm>//�����㷨�� 
using namespace std;
int vis[100] ;
int main()
{
	int m,n;
	int cnt = 0,i = 0,k= 0;//cnt���ֵ��ˣ�i���ӱ�ţ�k���� 
	cin >> m >> n;
	while(cnt != m){
		i++;
		if(i > m) i = 1;
		if(vis[i] == 0){
			k++;
			if(k == n){
				vis[i] = 1;
				cnt++;
				cout << i << " ";
				k = 0;
			}
		}			
	}
	return 0;
}
