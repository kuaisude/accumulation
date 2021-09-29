#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map> 
using namespace std;

int main()
{
	int n ,m;
	vector<string> ID,re;
	map<string,vector<string> > ans;
	cin >> n >> m;
	for(int i = 0;i<m;i++){
		string str;
		cin >> str; 
		ID.push_back(str);
	}
	for(int i = 0;i<n;i++){
		int l = 0;
		string name,thing;
		cin >> name >> l ;
		for(int j = 0;j<l;j++){
			cin >> thing;
			if (std::find(ID.begin(), ID.end(), thing) != ID.end())
			{
				if(!(std::find(re.begin(), re.end(), name) != re.end())){
					re.push_back(name);
				}
				ans[name].push_back(thing);
			}
		}		
	}
	
	int rn = 0,wn = 0;
	vector<string>:: iterator it = re.begin();
	for(;it!=re.end();it++){
		rn++;
		
		cout << *it << ":";
		for(int i = 0;i<ans[*it].size();i++ )
		{
			wn++;
			cout << " " << ans[*it][i];
		}
		cout << endl;
	}
	
	cout << rn << " " << wn << endl;
	
	
	return 0;	
}
