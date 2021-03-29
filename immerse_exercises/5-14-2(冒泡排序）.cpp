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
	
	for(i = n-1;i>=1;i--)
		for(j = 0;j<i;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	
	
	for(i = 0;i<n;i++)
		cout << a[i] << " ";
	cout << endl; 
	return 0;
}
