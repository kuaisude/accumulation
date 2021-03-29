#include<iostream>
const int MAXN = 100001;
using namespace std;
int main()
{
	int n,k,i,j;
	float temp,a[MAXN];
	cin>>n;
	for(i = 0;i<n;i++){
		cin>>a[i];
	}
	for(i = 0;i<n;i++){
		k = i;
		for(j = i+1;j<n;j++){
			if(a[k]>a[j]){
				k = j;
			}
		}
		if(k!=i){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	for(i = 0;i<n;i++)
		cout << a[i] << " ";
	cout << endl; 
	return 0;
}
