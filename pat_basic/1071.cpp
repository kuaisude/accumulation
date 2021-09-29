#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int total = 0;
bool outcome(int a,bool bos,int bet ,int b){
	if(bet > total){
		cout << "Not enough tokens.  Total = "<< total <<".";	
	}
	else if((a > b&&!bos)||(a<b&&bos)){
		total += bet;
		cout << "Win "<< bet<<"!  Total = "<< total <<".";
	}else{
		total -= bet;
		cout << "Lose "<< bet<<".  Total = "<< total <<".";
	}
	
	if(total == 0){
		cout << endl;
		cout << "Game Over." ;
		return 1;
	}
	return 0;
}

int main()
{
	int n = 0;
	int a,b,bet;
	bool bos;//big or small 
	cin >> total >> n;
	for(int i = 0;i<n;i++){
		if(i>0)
		{
			cout << endl;
		} 
		cin >> a >> bos >> bet >> b;
		if(outcome(a,bos,bet,b)){
			break;
		}
	}
	return 0;
}
