#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
int ans[100000000],n;
char input[100000];//全局变量,设计简单 

int hzf(int a){
	int a1,a2;
	stack<char> st;
	for(long long i = 0;input[i]!='\0';i++){
		if(input[i] == 'x'){
			int index = input[i+1] - '0';
			if(index == a){
				st.push(!ans[index]);
				//cout << "入栈"<< !ans[index];
			}else
				st.push(ans[index]);
				//cout << "入栈"<< ans[index];
		}else if(input[i] == '&'){
			a1 = st.top();
			st.pop();
			a2 = st.top();
			st.pop();
			st.push(a1&a2);
			//cout << "入栈"<< (a1&a2);
		}else if(input[i] == '|'){
			a1 = st.top();
			st.pop();
			a2 = st.top();
			st.pop();
			st.push(a1|a2);
			//cout << "入栈"<< (a1|a2);
		}else if(input[i] == '!'){
			a1 = st.top();
			st.pop();
			st.push(!a1);
			//cout << "入栈"<< (!a1);
		}
	}
	return st.top();
} 

int main() 
{
	int m,w=0;
	memset(ans,0,sizeof(ans));
	gets(input);
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> ans[i];
	}
	cin >> m;
	for(int i = 0;i<m;i++){
		cin >> w;
		cout << hzf(w) << endl;	
	} 
	return 0;	
}
