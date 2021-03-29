#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
struct stu{
	int num,score;
}stus[9999];
bool cmp(stu a,stu b)
{
	if(a.score != b.score)
	{
		return a.score > b.score;
	}
	return a.num < b.num;
	
}
int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 0;i<n;i++)
	{
		cin >> stus[i].num >> stus[i].score;
	}
	sort(stus,stus+n,cmp);
	int q; 
	q = ceil(m*3/2.0);
	for(int i=q;i<n;i++){
		if(stus[q-1].score==stus[i].score) q=q+1;
	}
	cout << stus[q-1].score << ' ' << q << endl;
	for(int i = 0;i<q;i++)
	{
		cout << stus[i].num << ' ' << stus[i].score << endl;
	}	
	return 0;	
} 
