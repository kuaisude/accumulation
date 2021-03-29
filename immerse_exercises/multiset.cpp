#include<iostream>
#include<cstring>
#include<set>
using namespace std;
struct Rule1{
	bool operator() (const int &a,const int &b)
	{
		return (a%10) < (b%10);
	}
};

int main()
{
	multiset<int,greater<int> > st;
	int a[10] = {1,14,13,14,12,14,13,23,55,76};
	for(int i = 0;i<10;++i)
		st.insert(a[i]);
	multiset<int,greater<int> >::iterator i;
	for(i = st.begin();i!=st.end();i++)
	{
		cout << *i << ",";
	}
	cout << endl;
	return 0;
}
