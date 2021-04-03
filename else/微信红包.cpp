#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;

/*
1.����һ��������������luckey[]������Ҫ������ӦǮ�ĸ���luck_count[]. 
2.���ú������Ϊ�����������ٵ�Ǯ��������0.08) ,���Կ��Խ����������������-0.08��
3.Ϊ�˱ȽϾ��� ��ȡԤ�����İ취���£�
	�Ƚ� �����Ǯ ���� ������֮�� �õ�������Ҫ׼��ÿ���������ĺ������t;
 	luck_count[]������������ֵΪt,
	ʣ�µ�Ǯ = �����Ǯ  - ������֮�� * t  
 	ʣ�µ��� ������� ʣ�µ�Ǯ ����¼��luck_count[]��Ӧ����
	���ʣ�²������Ľ���ָ�֮��һ��ȡ������ˡ�
	��ţ����������˳���������������һ�˿ɲ��Ǽ������� 
	  
���㣺 

*/
int luck_count[19] = {0};
double luckey[19]={1.66,1.68,16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99};//������

double Reserved_red(double m , int n){//Ԥ���������

	double r_m = m;//ʣ���Ǯ 
	int k = 0;
	int a = 18;
	
	for(int i=0;i<n;i++)//ѭ��ÿ�����
	{
		k=rand()%(a+1);
		cout << k << ' '<< luckey[k] << ' ' << r_m << ' ' <<endl;
		r_m = r_m - luckey[k]; 
		luck_count[k] ++;
		if(r_m == 0) //�жϽ�������
		{
			break;
		}
		if(r_m < 0)  //�жϽ�����һ��
		{		
			r_m += luckey[k];
			luck_count[k] --;
			a = 0;
		
			
			while(luckey[a] < r_m && a < 19){
				a++;
				
			}
			
		} 
	}
	
	cout << endl;
	return r_m;
}
void hand_out(int *p,int n){//����� 

	
	//��ȡ��� 
	double red[n];
	int k = 0;
	int count[19];
	for(int i = 0;i<19;i++)
	{
		count[i] = luck_count[i];
		cout << count[i] << ' ';
	 } 
	 cout << endl;
	
	
	for(int i = 0;i<n;i++)
	{
		
		while(count[k]<=0&&k<19){
			k++;
		}
		
		red[i] = luckey[k];
		count[k]--;
	}
	
	for(int i = 0;i<n;i++)
	{
		cout << red[i] <<' ';
	}
	cout << endl;
	
	
}

int main()
{
	double m,r_m,m_m=0; //��������ڽ���֤���
	int red[200]; 
	int n; //�ֳ�n�����
	int t = 0;//���ȴ���
	double temp = 0; 
	int k;
	cout << "��������n:";
	cin >> n;
	cout << "����Ǯ��m:";
	cin >> m;
	sort(luckey,luckey+19);

	
	for(int i = 0;i<19;i++){
		temp += luckey[i];
	}
	//Ԥ����� 
//	if(n > 19 && m > temp){
//		for(int i = 0;i<19;i++)
//		{
//			luck_count[19] = 1;
//		}
//		Reserved_red(m-temp,n-19);
//	}
//	else 
		Reserved_red(m,n);
		
	for(int i = 0;i<n;i++)
	{
		red[i] = i + 1;
		cout << red[i] <<' ';
	}
	cout << endl;
	//������� 
	random_shuffle(red,red+n);
	
	for(int i = 0;i<n;i++)
	{
		
		cout << red[i] <<' ';
	}
	cout << endl;
	
	
	//����ַ���� 
	hand_out(red,n);


	return 0;
}
	
	

