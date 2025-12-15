#include <stdio.h>

int main()
{
    int t;
    long long int x, y, n, k;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld", &x, &y, &n);
        k = n - (n - y) % x;
        printf("%lld", k);
    }
    return 0;
}
