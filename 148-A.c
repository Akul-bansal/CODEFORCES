#include <stdio.h>
                                                // 148A - Insomnia cure
int main()
{
    int k, l, m, n;
    long int d;
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%ld", &d);
    int count = 0;
    for (long int i = 1; i <= d; i++)
    {

        if (i % n == 0 || i % k == 0 || i % l == 0 || i % m == 0)
            count++;
    }
    printf("%d", count);
    return 0;
}
