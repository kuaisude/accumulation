//������֪���ڿ���������ѡ�����Ԫ�����λ���ǲ���ģ����Կ��Ը��ݴ����жϣ�����ֻ������һ��������ж��Ǵ���ġ�����3,2,1,4,5����2��
//������Ԫ�����Ի����жϣ��Ǹ����ǲ�������ǰ��ǰλ�����ֵ
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N],b[N],c[N];//��õ����������ÿ����������Ԫ
    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+N);
    int count=0;
    int temp=0,max=0;
    for(int i=0;i<N;i++){
        if(max<b[i]) max=b[i];    //�����ֵ��������    
        if(a[i]==b[i]&&a[i]==max){//�������������ͬλ��һ�������������ֵ����ȷ������Ԫ 
        c[count++]=a[i];
        }
    }
    cout<<count<<endl;
    if(count==0) cout<<endl;    //�����Ԫ������0�����л���Ҫ����� 
    for(int i=0;i<count;i++){
            if(i!=0)
            cout<<" ";
            cout<<c[i];
    }
    return 0;
}
