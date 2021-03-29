#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int area[1000005]; //ÿһ�е�С���ε��������area[0]��ʾ������Ϊ0��1֮���С���ε���� R���Ϊ1000000
int R; //��Ŀ�е�R
int N; //��Ŀ�е�N
int main()
{
	cin >> R >> N;
    for(int i=0; i<N; i++)
    {
        //ͨ��������ĸ����ݼ����������Ҫ������
        int l,t,w,h;
        cin >> l >> t >> w >> h;
        for(int i=l; i<l+w; i++)
        {
            area[i]+=h;
        }
    }

    int l,r,mid;
    l=0;
    r=R;
    long long left=0,right=0; //ע����������п��ܳ���2^31
    while(r>l)
    {
        left=0;
        right=0;
        mid=(l+r)/2;

        for(int i=0; i<mid; i++)
        {
            left+=area[i];
        }
        for(int i=mid; i<R; i++)
        {
            right+=area[i];
        }

        if(r-l==1) //�������ֺ������ж�
        {
            if(left>=right) //�����ǰ��ߴ����ұ�
            {
                if(left+area[l]>=right-area[l] && //�����k�����ұ��ƶ��Ժ���Ȼ������ߴ����ұߣ���ʡ�ԣ�
                        (left+area[l]-(right-area[l])<=left-right)) //�����k�����ұ��ƶ��Ժ���������
                {
                    l++; //�Ǿ��ƶ���
                }
                else
                {
                    break; //����
                }
            }
            else //�����ǰ����Ѿ����ұ�С��
            {
                l++; //�϶�Ҫ�ƶ���
            }
        }
        else //������
        {
            if(left<=right) //Ϊ�˾�����k���ң���Ҫ��С�ڵ���
            {
                l=mid;
            }
            if(left>right) //Ϊ�˾������������
            {
                r=mid;
            }
        }
    }
    while(l+1<=R&&area[l+1]==0) //���ǵ����ܻ����ұ�û�о��ε��������k���������ж�                       //l+1<=R��֤��l���ᳬ������εı߽硣
    {
        l++;
    }
    cout<<l;
    return 0;
}
