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
			cout << "����������:";
			cin >> name;
			cout << "������ѧ��:";
			cin >> num;
			credit = 0;
			ave_grade = 0;
			Num_course = 0;
		//	cout << "Object is being created" << endl;
		}
		//(3)
		void show()
		{
			cout << "��ѧԱ����:" << name << endl;
			cout << "��ѧԱѧ��:"  << num << endl;
			cout << "��ѧԱѧ��:"  << credit << endl;
			cout << "��ѧԱƽ���ɼ�:"  << ave_grade << endl;
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
	//(5) ���ܣ�protected ��Ա���Ա���������ʣ��������ڲ��ܷ��ʡ� 
	a.append(20,100);
	a.show();
	a.append(20,80);
	a.show();
	return 0;
} 
