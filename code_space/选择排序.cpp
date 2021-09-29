#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	
	int ans[10] = {1,2,43,54,235,46,24,23,54,89};
	
	for(int i = 0;i<10;i++){
		cout << ans[i] << ' ';
	}
	cout <<endl;
	
	for(int i = 0;i<9;i++){
		for(int j = i + 1;j<10;j++){
			if(ans[i] < ans[j]){
				int temp;
				temp = ans[i];
				ans[i] = ans[j];
				ans[j] = temp;
			}
		}
	}
	
	for(int i = 0;i<10;i++){
		cout << ans[i] << ' ';
	}
	cout <<endl;
	
	
	
	return 0;
 } 
