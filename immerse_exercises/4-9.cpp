/*
4.9 ���Խ�������ʦ�����ȫ��ѧ����ƽ���֣����ܰ�����ʦ�������޷�֪���ο�����������֪��
�μӿ��Ե��˶�����0�֡����ԣ��ṩ������ɸ����Գɼ�����0��Ϊ����Ľ�����־�� 


*/

#include<iostream>
using namespace std;
int main(){
	float score,tot = 0;
	int pep = 0;
	cin>>score;
	while(score!=0)
	{
		pep++;
		tot+=score;
		cin>>score;
	}
	cout<<tot/pep<<endl;
	return 0; 
} 
