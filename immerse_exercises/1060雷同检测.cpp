#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1); 
	getline(cin,str2);
	int n = str1.size();
	for(int i = 0;i<n;i++)
	{
		if(str1[i] == str2[i])
			cout << i+1 << " ";
	} 
	 cout << endl;
	 return 0;
} 
