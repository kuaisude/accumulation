#include<iostream>
using namespace std;
const int MAXN = 100000;
int main(){
	int n,find;
	int a[MAXN];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	cin >> find;
	for(int i = 0;i<n;i++){
		if(a[i] == find){
			cout << "�������ֵ��������±��ǣ� "<<i<<endl;
		}
	}
	return 0;
}
