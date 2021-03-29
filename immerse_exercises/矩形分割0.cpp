#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int area[1000005]; //每一列的小矩形的面积，如area[0]表示横坐标为0到1之间的小矩形的面积 R最大为1000000
int R; //题目中的R
int N; //题目中的N
int main()
{
	cin >> R >> N;
    for(int i=0; i<N; i++)
    {
        //通过输入的四个数据计算出我们需要的数据
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
    long long left=0,right=0; //注意总面积很有可能超出2^31
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

        if(r-l==1) //经过二分后的最后判断
        {
            if(left>=right) //如果当前左边大于右边
            {
                if(left+area[l]>=right-area[l] && //如果把k再往右边移动以后仍然满足左边大于右边（可省略）
                        (left+area[l]-(right-area[l])<=left-right)) //如果把k再往右边移动以后面积差不增加
                {
                    l++; //那就移动吧
                }
                else
                {
                    break; //不移
                }
            }
            else //如果当前左边已经比右边小了
            {
                l++; //肯定要移动了
            }
        }
        else //二分中
        {
            if(left<=right) //为了尽量让k靠右，需要用小于等于
            {
                l=mid;
            }
            if(left>right) //为了尽量减少面积差
            {
                r=mid;
            }
        }
    }
    while(l+1<=R&&area[l+1]==0) //考虑到可能会有右边没有矩形的情况，对k进行最后的判断                       //l+1<=R保证了l不会超出大矩形的边界。
    {
        l++;
    }
    cout<<l;
    return 0;
}
