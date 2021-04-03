#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<iostream> 
using namespace std;

int main(){
	double luckey[19]={1.66,1.68,16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99};//吉利数
	double red[200];//红包
	double m,r_m,m_m; //输入金额，现在金额，验证金额
	int n; //分成n个红包
	int i,k;
	
	
	cout << "输入人数n:";
	cin >> n;
	cout << "输入钱数m:";
	cin >> m;
	
	for(i=0;i<n;i++) //底线为0.01
	{
		red[i]=0.08;
		luckey[i] -= 0.08;
	}

	r_m = m - 0.08*n;

	while(1)//循环
	{
		for(i=0;i<n;i++)//循环每个红包
		{
			k=rand()%10;
			red[i] = red[i] + luckey[k] ;  //进行随机添加吉利数
			r_m = r_m - luckey[k] ;
			if(r_m == 0) //判断结束，好
			{
				goto here;
			}
			if(r_m < 0)  //判断结束，一般
			{		
				red[i] = red[i] + r_m;
				goto here;
			}
		}
	}
	here:
	for(i=0;i<n;i++) //循环输出红包
	{	
		m_m=m_m+red[i];
		cout << red[i] << "\t";
	}
	cout << endl;
	return 0;
}

