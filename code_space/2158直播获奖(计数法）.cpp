#include<bits/stdc++.h>
using namespace std;
int n, w, x, a[607];
int main() {
	cin >> n >> w;
  	for(int i = 1; i <= n; ++i) {
	    cin >> x;
	    a[x]++;
	    int pl = max(1, i * w / 100);//获奖人数 
	    int num = 0;//记录当前排名次 
	    for(int j = 600; j >= 0; --j) {
	        num += a[j];
	        if(num >= pl) {
	            cout <<  j << " ";//循环结束条件 
	            break;
	        }
	    }
    }
    return 0;
}
