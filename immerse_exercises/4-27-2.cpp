/*
4-27
百钱买百鸡。鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，
问鸡翁，鸡母，鸡雏各如何？

方法二 
 
*/

#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	for(x = 0;x<=100/5;x++)
		for(y = 0;y<=100/3;y++)
		{
			z = 100-x-y;
			if(5*x+3*y+z/3==100)
			{
				cout<<x<<" "<<y<<" "<<z<<endl;
			} 
		} 
	return 0; 
} 

