#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int a[500],b[500],c[501],ans[501],len_a,len_b,len_ans;

void Read(int *a,int &len)
{
	string cur;
	cin >> cur;
	len = cur.length();
	for(int i = 0;i < len;i++)
	{
		a[i] = cur[i] - 48;//asciiÂë48ÊÇ'0'; 
	}
	reverse(a,a+len);
}


int main()
{
	Read(a,len_a);
	Read(b,len_b); 
	len_ans = max(len_a,len_b);
	for(int i = 0;i<=len_ans;i++)
	{
		ans[i] = a[i] + b[i] + c[i];
		if(ans[i] > 9) c[i+1] = ans[i]/10, ans[i] %= 10; 
	}
	while(ans[len_ans] > 0) len_ans ++;
	
	for(int i = len_ans - 1;i >= 0;i--)
		cout << ans[i];
	cout << endl;
	
	return 0;
} 
