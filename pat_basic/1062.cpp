#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

struct fs{
	int Z;
	int M;
}; 

fs zh(string a){
	fs ans;
	ans.Z = 0;
	ans.M = 0;
	int i = 0;
	for(i = 0;a[i]!= '/' ;i++)
	{
		ans.Z *= 10;
		ans.Z += a[i] - '0'; 
	}
	
	for(i=i+1;i<a.size();i++)
	{
		ans.M *= 10;
		ans.M += a[i] - '0';
	}
	
	return ans;
} 

bool iszj(int a,int b)
{
	if(a > b ) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	if(b%a == 0){
		return false;
	}
	
	for(int i = 2;i<a;i++){
		if(a%i == 0 && b%i == 0)
			return false;
	}
	
	return true;
}

int main()
{
	int fm;
	string n,m;
	cin >> n >> m >> fm;
	
	fs a,b;
	a = zh(n);
	b = zh(m);
	
	double min,max;
	
	min = double(fm) * a.Z / a.M;
	max = double(fm) * b.Z / b.M;
	
	int flag = 0 ;//∏Ò Ω 
	for(int i = int(min)+1; i<max ; i++)
	{
		if(iszj(i,fm)){
			if(flag == 0){
				flag = 1;
			}else{
				cout <<" ";
			}
			cout << i <<"/"<< fm;
		}
	}

	return 0;
}
