//众所周知，在快速排序中选择的主元排序后位置是不变的，所以可以根据此来判断，但是只根据这一种情况来判断是错误的。比如3,2,1,4,5，中2就
//不是主元，所以还需判断，那个数是不是排序前当前位置最大值
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N],b[N],c[N];//最好的情况，可能每个数都是主元
    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+N);
    int count=0;
    int temp=0,max=0;
    for(int i=0;i<N;i++){
        if(max<b[i]) max=b[i];    //把最大值保存下来    
        if(a[i]==b[i]&&a[i]==max){//如果和排序后的相同位置一样，而且是最大值，则确定是主元 
        c[count++]=a[i];
        }
    }
    cout<<count<<endl;
    if(count==0) cout<<endl;    //如果主元个数是0，空行还是要输出的 
    for(int i=0;i<count;i++){
            if(i!=0)
            cout<<" ";
            cout<<c[i];
    }
    return 0;
}
