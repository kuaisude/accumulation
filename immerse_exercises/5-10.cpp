#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int num[11];
	int i;
	memset(num,0,sizeof(num));
	while(cin>>i){
		if(i>10||i<=0){
			break;
		}
		num[i] = num[i] + 1;
	}
	
	for(i = 1;i<=10;i++){
		cout<<"��"<<i<<"�Ÿ��ֵ�ѡƱ��Ϊ��"<<num[i]<<endl; 
	}
	
	return 0;	
}
