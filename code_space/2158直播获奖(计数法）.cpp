#include<bits/stdc++.h>
using namespace std;
int n, w, x, a[607];
int main() {
	cin >> n >> w;
  	for(int i = 1; i <= n; ++i) {
	    cin >> x;
	    a[x]++;
	    int pl = max(1, i * w / 100);//������ 
	    int num = 0;//��¼��ǰ������ 
	    for(int j = 600; j >= 0; --j) {
	        num += a[j];
	        if(num >= pl) {
	            cout <<  j << " ";//ѭ���������� 
	            break;
	        }
	    }
    }
    return 0;
}
