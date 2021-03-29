#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char in;
	char password[9];
	char key[9] = "NOIP@CCF";
	while(getchar() != 'N')
	{
		getchar();
		gets(password);
		if(!strcmp(password,key))
		{
			cout << "Success" << endl;
			break;	
		}else
		{
			cout << "Sorry" << endl;
		}
	}	
}
