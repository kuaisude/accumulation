#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int score[10];
	double out;
	memset(score,0,sizeof(score));
	for(int i = 0;i<10;i++)
	{
		cin >>score[i];
	}
	sort(score,score+10);
	for(int i = 0;i<8;i++)
	{
		out += score[i+1];
	}
	out /= 8;
	printf("%.3lf",out); 
	return 0;
} 
