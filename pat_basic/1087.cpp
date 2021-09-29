#include <stdio.h>

int main()
{
        int n;
        int i, m, m0 = -1, count = 0;

        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
                m = i / 2 + i /3 + i / 5;
                if (m > m0)
                        count++;
                m0 = m;
        }

        printf("%d", count);

        return 0;
}

