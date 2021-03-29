#include<iostream>
using namespace std;
const int SIZE = 100;
int x[SIZE],y[SIZE],f[SIZE];
int n, i ,j ,max_f, ans;

int main()
{
	cin>>n;
	for(i = 1;i <= n;i++)
		cin>>x[i]>>y[i];
	max_f = 0;
	for(i = 1;i <= n;i++)
	{
		f[i] = ____¢Ù___;
		for(j = 1;j <= n;j++)
		{
			if(x[j] < x[i] && ____¢Ú___){
				____¢Û___;
			}
		}
		if(____¢Ü___) {
			max_f = f[i];
			____¢Ý___;
		}
	}
	for(i = 1;i <= n;i++)
	{
		cout<<f[i]<<endl;
	}
	cout << ans <<endl;
}
