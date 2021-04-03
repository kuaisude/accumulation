#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class student{
 	protected: 
 	//(1)
		string name;
		string num;
		int credit;
		double ave_grade;
		int Num_course;
	
	public :
		//(2)
		student(){
			cout << "请输入名字:";
			cin >> name;
			cout << "请输入学号:";
			cin >> num;
			credit = 0;
			ave_grade = 0;
			Num_course = 0;
		//	cout << "Object is being created" << endl;
		}
		//(3)
		void show()
		{
			cout << "该学员名字:" << name << endl;
			cout << "该学员学号:"  << num << endl;
			cout << "该学员学分:"  << credit << endl;
			cout << "该学员平均成绩:"  << ave_grade << endl;
		}
		//(4)
		void append(int c,double a)
		{
			credit += c;
			ave_grade = (ave_grade*Num_course + a)/(Num_course + 1);
			Num_course += 1;
			
		}
};

int main()
{
	student a;
	a.show();
	//(5) 不能，protected 成员可以被派生类访问，主函数内不能访问。 
	a.append(20,100);
	a.show();
	a.append(20,80);
	a.show();
	return 0;
} 
