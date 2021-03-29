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
		for(j = i-1;j>=0;j--){
			if(a[j]<a[i]){
				break;
			}	
		} 
		if(j!=i-1){
			temp = a[i];
			for(k = i-1;k>j;k--){
				a[k+1] = a[k];
			}
			a[k+1] = temp;
		}
	} 
	
	

	for(i = 0;i<n;i++)
		cout << a[i] << " ";
	cout << endl; 
	return 0;
}
