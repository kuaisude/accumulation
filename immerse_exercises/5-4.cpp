#include<iostream>
using namespace std;
int main()
{
	int year,month,day ,total = 0,i;
	cin >> year >> month >> day ;
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for (i = 0;i<month;i++)
	{
		total += a[i];
	}
	total += day;
	if(year %4 == 0&&year%100!=0||year %400==0)
	{
		if(month > 2)
		{
			total++;
		}
	}
	cout << total;
	return 0;
}
