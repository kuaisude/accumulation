#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
struct stu{
	int yw,sx,yy;
	int zj,num;
}stus[1000];
bool cmp(stu a,stu b)
{
	if(a.zj == b.zj)
	{
		if(a.yw == b.yw)
		{
			return a.num < b.num;
		}
		return a.yw > b.yw;
	}
	return a.zj > b.zj;
}
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> stus[i].yw >> stus[i].sx >> stus[i].yy;
		stus[i].zj = stus[i].yw + stus[i].sx + stus[i].yy;
		stus[i].num = i + 1;
	}
	sort(stus,stus+n,cmp);
	for(int i = 0;i<5;i++)
	{
		cout << stus[i].num << ' ' << stus[i].zj << endl;
	}
	return 0;	
}
