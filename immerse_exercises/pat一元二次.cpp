
#include<iostream>
using namespace std;
int main()
{
	int a[2];//a[0] = 系数；a[1] = 指数； 
	cin>>a[0]>>a[1];
	if(a[1]==0)
	{
		cout<<"0 0";
		return 0;
	} 
	else{
		cout<<a[0]*a[1]<<' '<<a[1]-1;
	}
	while(cin>>a[0]>>a[1]){
		if(a[1]!=0){
			cout<<' '<<a[0]*a[1]<<' '<<a[1]-1;
		}
	}
	
	return 0;
} 
