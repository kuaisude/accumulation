#include<iostream>
#include<string>
using namespace std;

class Stutent
{
public :
	string m_Name;
	int m_Id;
	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int id)
	{
		m_Id = id;
	}
	void show()
	{
		cout << "Ãû×Ö£º" << m_Name << endl;
		cout << "ºÅ£º" << m_Id << endl;
	}
};
int main()
{
	Stutent s;
	s.setId(10);
	s.setName("Íõ");
	s.show();
}

