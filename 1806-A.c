#include <stdio.h>
                                          // 1806A - Walking Master
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long int a, b, c, d;
        long int count = 0;
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if (b > d)
            printf("-1\n");
        else
        {
            count = d - b;
            a = a + d - b;
            if (a < c)
                printf("-1\n");
            else
            {
                count = count + (a - c);
                printf("%ld\n", count);
            }
        }
    }
    return 0;
}
