#include<map>
#include<iostream>
using namespace std;
int main()
{
    int col,row,tol;
    scanf("%d %d %d\n", &col, &row, &tol);

    int a[row+2][col+2] = {0};
    map<int, int> pixels;
    for(int i=1; i<=row; i++)
        for(int j=1; j<=col; j++)
        {
            scanf("%d", &a[i][j]);
            pixels[a[i][j]] += 1;
        }

    int x, y, cnt=0;
    bool flag = false;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if((abs(a[i][j]-a[i-1][j-1])>tol)&&
                    (abs(a[i][j]-a[i-1][j])>tol)&&
                    (abs(a[i][j]-a[i-1][j+1])>tol)&&
                    (abs(a[i][j]-a[i][j+1])>tol)&&
                    (abs(a[i][j]-a[i+1][j+1])>tol)&&
                    (abs(a[i][j]-a[i+1][j])>tol)&&
                    (abs(a[i][j]-a[i+1][j-1])>tol)&&
                    (abs(a[i][j]-a[i][j-1])>tol)&&
                    (pixels[a[i][j]]==1))
            {
                x = i;
                y = j;
                cnt++;
                if(cnt>1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) break;
    }
    if(cnt==1) printf("(%d, %d): %d", y, x, a[x][y]);
    if(cnt>1) printf("Not Unique");
    if(cnt<=0) printf("Not Exist");
    return 0;
}

