#include<iostream>
#include<cstring>
using namespace std;
bool compare (string a,string b)//比较两个数大小 若a >= b返回true 否则返回false 
{
	int u = a.size(),v = b.size();
	if(u!=v)	return u>v;
	for(int i = 0;i < u;i++){
		if(a[i]!= b[i]) return a[i] > b[i];
		
	}
	return true;
}
int main()
{
	int flag = 0; 
	string a,b,c;
	int numa[10090] = {0},numb[10090] = {0},numc[10090] = {0};
	cin >> a >> b;
	if(!compare (a,b) ){//保证a变成大的值 
		flag = 1;//答案一定是负数，标记 
		c = a;
		a = b;
		b = c;
	}
	
	int lena = a.size();
	int lenb = b.length();
	int j = 0,notzero = 0;
	for(int i = lena-1;i>=0;i--){//翻转数字a 
		numa[j] = a[i] - '0';
		j++;
	}
	j = 0;
	for(int i = lenb-1;i>=0;i--){//翻转数字b 
		numb[j] = b[i] - '0';
		j++;
	}
	for(int i =0;i<max(lena,lenb) + 1;i++){//模拟加法 
		if(numa[i] < numb[i])
		{
			numa[i+1] --;
			numa[i] += 10;
		}
		numc[i] = numa[i] - numb[i];
	}
	int i;
	for(i =10089;i>=0;i--){
		if(numc[i] !=0){
			notzero = 1;//记录特殊0+0情况 
			break;
		}
	}
	
	if(notzero){
		if(flag == 1)cout << "-";
		for(;i>=0;i--){
			cout <<numc[i];
		}
	}else{
		cout << 0 ;
	}
	
	return 0;
 } 
