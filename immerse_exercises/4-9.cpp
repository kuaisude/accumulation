/*
4.9 考试结束后，老师想计算全体学生的平均分，你能帮助老师吗？现在无法知道参考人数，但是知道
参加考试的人都不是0分。所以，提供你的若干个考试成绩，以0作为计算的结束标志。 


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
