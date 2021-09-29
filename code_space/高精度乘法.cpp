#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a,b;
	int numa[10090] = {0},numb[10090] = {0},numc[10090] = {0};
	cin >> a >> b;
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
	
	int lenc = lena + lenb;
	for(int i = 0;i<=lena;i++){//模拟加法 ,注意下标 
		for(j = 0;j <= lenb;j++){
			
			numc[i+j] += numa[i]*numb[j];
			numc[i + j + 1] += numc[i + j]/10;
			numc[i + j] %= 10;
		}
	}
	int i;
	for(i =lenc;i>=0;i--){
		if(numc[i] !=0){
			notzero = 1;//记录特殊0+0情况 
			break;
		}
	}
	if(notzero){
		for(;i>=0;i--){
			cout <<numc[i];
		}
	}else{
		cout << 0 ;
	}

	return 0;
}
