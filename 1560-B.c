#include <stdio.h>

int main()
{
    int t;
    long int a, b, c;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);
        long int res = 2 * (b - a);
        if (res < 0)
            res = -res;
        if (res >= a && res >= b && res >= c)
        {
            if (c < res / 2)
                printf("%ld\n", res / 2 + c);
            else if (c == res / 2)
                printf("%ld\n", res);
            else if (c > res / 2 && c != res)
                printf("%ld\n", c - res / 2);
            else
                printf("%ld\n", res / 2);
        }
        else
            printf("-1\n");
    }
    return 0;
}
