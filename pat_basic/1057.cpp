#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int sum = 0,bits = 0;
	for(int i = 0;i<str.size();i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			sum += str[i] - 'a'+ 1;
		}else if(str[i] >= 'A' && str[i] <= 'Z'){
			sum += str[i] - 'A' + 1;
		}
	}
	int a = 0,b = 0;
	while(sum){
		if(sum%2){
			b++;
		}else{
			a++;
		}
		sum /= 2;
	}
	cout << a << " " << b << endl;
	
	return 0;
	
	
 } 
