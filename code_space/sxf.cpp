#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n) {
    vector<int> vec;
    vec.clear();
    bool flag;
    for(int j = 1;j<n;j++){
    	flag = true;
        int i = 2;
        for(i = 2; i*i < j ;i++){
            if(n%i == 0){
            	flag = false;
                break;
            }
        }
        if(flag){
            vec.push_back(i);
        }
    }
    return vec.size();
}


int main()
{
	int n;
	cin >> n;
	int a = countPrimes(n);
	cout << a << endl;
	
	return 0;
}
