#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<setiosflags(ios::left);  // ������룬��һ��ʵ����ʽ��ʾ
    cout.precision(5);       // ���ó�С����������λ��Ч���� 
    cout<<123.456789<<endl;
    cout.width(10);          // ������ʾ���10 
    cout.fill('*');          // ����ʾ����հ״���*���
    cout<<resetiosflags(ios::left);  // ���״̬�����
    cout<<setiosflags(ios::right);   // �����Ҷ���
    cout<<123.456789<<endl;
    cout<<setiosflags(ios::left|ios::fixed);    // ������룬�Թ̶�С��λ��ʾ
    cout.precision(3);    // ����ʵ����ʾ��λС��
    cout<<999.123456<<endl; 
    cout<<resetiosflags(ios::left|ios::fixed);  //���״̬�����Ͷ����ʽ
    cout<<setiosflags(ios::left|ios::scientific);    //��������룬�Կ�ѧ��������ʾ 
    cout.precision(3);   //���ñ�����λС��
    cout<<123.45678<<endl;
    return 0; 
}
