#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cin >> num1 >> num2 >> op;
	switch(op)
	{
		case '+':cout << num1 << op << num2 << '=' << num1+num2 << endl;break;
		case '-':cout << num1 << op << num2 << '=' << num1-num2 << endl;break;
		case '*':cout << num1 << op << num2 << '=' << num1*num2 << endl;break;
		case '/':if(num2) cout << num1 << op << num2 << '=' << num1/num2 << endl;break;
		default:cout << "Invalid operator!";
	}
	return 0;
 } 
