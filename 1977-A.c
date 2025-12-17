#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int m, n;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);
        if (n >= m)
        {
            if ((n - m) % 2 == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
