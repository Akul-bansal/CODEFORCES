#include <stdio.h>
                      // 1955A - Yogurt Sale
int main()
{
    int n, t, a, b, x;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &n, &a, &b);
        x = n / 2;
        if (n % 2 == 0)
        {
            if (b * x < a * n)
                printf("%d\n", b * x);
            else
                printf("%d\n", a * n);
        }
        else
        {
            if ((b * x + a) < a * n)
                printf("%d\n", b * x + a);
            else
                printf("%d\n", a * n);
        }
    }
    return 0;
}
