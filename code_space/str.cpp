#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string getPermutation(int n, int k) {
    vector<int> vec;
    vector<string> str_vec;
    string str;
    vec.clear();
    for(int i = 1;i<=n;i++){
        vec.push_back(i);
    }
    vector<int>::iterator it = vec.begin();
    do{
        for(int i = 0;i<n;i++)
        {
             str.push_back('0' + *(it + i)); 
        }
        str_vec.push_back(str);
        str.clear();
    }while(next_permutation(it,it + n));

    return str_vec[k-1];
}


int main()
{
	
	int n,k;
	cin >> n >> k;
	string str;
	str = getPermutation(n,k);
	cout << str << endl;
	return 0;
	
 } 
