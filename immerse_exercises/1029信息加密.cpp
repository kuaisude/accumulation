#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char tanslate(char a){
	char e;
	if (a >= 'A'&&a <= 'Z')
	{
		e = (a+3<='Z'?a+3:a+3-26);
	}else if(a >= 'a'&&a <= 'z')
	{
		e = (a+3<='z'?a+3:a+3-26);
	}else{
		e = a;
	}
	return e;
}

int main()
{
	string str;
	cin >> str;
	for(int i = 0;i<str.length();i++){
		str[i] = tanslate(str[i]);
	}
	cout << str <<endl;
}





