#include<iostream>
using namespace std;
int main()
{
	int n,find,low = 0,mid = 0,high = 0;
	cin >> n;
	high = n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> find;
	

	while(low <= high&&a[mid] != find)
	{
		mid = (low + high)/2
		if(a[mid] > find)
		{
			high = mid - 1;	
		}else
		{
			low = mid + 1;
		}
	}

	
	if(a[mid] == find)
	{
		cout << mid << endl;
	}else
	{
		cout << "ц╩спур╣╫" << endl;
	}
	
	return 0;	
}
