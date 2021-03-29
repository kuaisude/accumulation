#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
const int N = 5000;
 
struct a {
    int no, a;
} a[N];
 
int cmp(a x, a y)
{
    if (x.a == y.a)
        return x.no < y.no;
    else
        return x.a > y.a;
}
 
int main()
{
    int n, m;
 
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> a[i].no >> a[i].a;
 
    sort(a, a+n, cmp);
 
    m = floor(1.5*m);
    for(int i=m; i<n; i++)
        if(a[i].a == a[i-1].a)
            m++;
        else
            break;
 
    cout << a[m - 1].a << " " << m << endl;
    for(int i=0; i<m; i++)
        cout << a[i].no << " " << a[i].a << endl;
 
    return 0;
}

