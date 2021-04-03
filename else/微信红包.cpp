#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;

/*
1.设置一个吉利数的数组luckey[]，和需要发的相应钱的个数luck_count[]. 
2.设置红包最少为吉利数里最少的钱（本题是0.08) ,所以可以将吉利数里面的数都-0.08。
3.为了比较均匀 采取预设红包的办法如下：
	先将 输入的钱 除以 吉利数之和 得到至少需要准备每个吉利数的红包个数t;
 	luck_count[]的所有数都赋值为t,
	剩下的钱 = 输入的钱  - 吉利数之和 * t  
 	剩下的人 随机分配 剩下的钱 并记录在luck_count[]相应增加
	最后剩下不足分配的金额保存分给之后一个取红包的人。
	编号，再随机打乱顺序，输出红包，（最后一人可不是吉利数） 
	  
不足： 

*/
int luck_count[19] = {0};
double luckey[19]={1.66,1.68,16.8,1.78,17.8,1.88,18.8,1.99,5.20,0.66,6.6,6.66,0.08,0.88,8.8,8.88,0.99,9.9,9.99};//吉利数

double Reserved_red(double m , int n){//预留红包方法

	double r_m = m;//剩余的钱 
	int k = 0;
	int a = 18;
	
	for(int i=0;i<n;i++)//循环每个红包
	{
		k=rand()%(a+1);
		cout << k << ' '<< luckey[k] << ' ' << r_m << ' ' <<endl;
		r_m = r_m - luckey[k]; 
		luck_count[k] ++;
		if(r_m == 0) //判断结束，好
		{
			break;
		}
		if(r_m < 0)  //判断结束，一般
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
void hand_out(int *p,int n){//发红包 

	
	//提取红包 
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
	double m,r_m,m_m=0; //输入金额，现在金额，验证金额
	int red[200]; 
	int n; //分成n个红包
	int t = 0;//均匀次数
	double temp = 0; 
	int k;
	cout << "输入人数n:";
	cin >> n;
	cout << "输入钱数m:";
	cin >> m;
	sort(luckey,luckey+19);

	
	for(int i = 0;i<19;i++){
		temp += luckey[i];
	}
	//预留红包 
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
	//随机生成 
	random_shuffle(red,red+n);
	
	for(int i = 0;i<n;i++)
	{
		
		cout << red[i] <<' ';
	}
	cout << endl;
	
	
	//输出分发红包 
	hand_out(red,n);


	return 0;
}
	
	

