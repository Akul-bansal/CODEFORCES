#include <stdio.h>
                                                                       // 1409A - Yet Another Two Integers Problem
int main()
{
    long int n;
    long long int a, b, t;
    scanf("%ld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (a == b)
        {
            t = 0;
        }
        else if (a < b)
        {
            t = b - a;
        }
        else
            t = a - b;
        long long int c;
        c = t / 10;
        if (t % 10 == 0)
            printf("%lld\n", c);
        else
            printf("%lld\n", c + 1);
    }
    return 0;
}
