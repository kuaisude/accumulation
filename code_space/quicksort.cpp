#include<iostream>
using namespace std;
int a[101],n;
void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left > right)
		return;
	temp = a[left];
	i = left;
	j = right;
	
	while(i!=j)
	{
		while(a[j] >= temp && i < j){
			j--;
		}
		while(a[i] <= temp && i < j)
		{
			i++;
		}
		if(i < j){
			a[i] ^= a[j];
			a[j] ^= a[i];
			a[i] ^= a[j];
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left,i-1);
	quicksort(i+1,right);

	return ;
}

int main()
{
	int i ,j;
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	
	quicksort(1,n);
	
	for(i = 1;i<=n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	
	
	return 0;
}
