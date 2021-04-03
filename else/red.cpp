#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;

int luck_count[19] = {0};
double luckey[19]={1.66,1.68,16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99};//吉利数
int a[19] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};//序号数列 

void update_a(){
	random_shuffle(a,a+19);
}

int main()
{
	int n,m;
	cout << "输入人数n:";
	cin >> n;
	cout << "输入钱数m:";
	cin >> m;
	sort(luckey,luckey+19);//排序 

	update_a();//打乱顺序 
	
	for(int i = 0;i<19;i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	


	return 0;
}
