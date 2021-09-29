#include <iostream>
using namespace std;
int main()
{
    int n,m,a,b,t, tmp;
    scanf("%d %d %d %d %d", &n, &m, &a, &b, &t);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&tmp);
            if((tmp>=a)&&(tmp<=b))
            {
                printf("%.03d", t);
            }
            else printf("%.03d", tmp);
            if(j<m-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}

