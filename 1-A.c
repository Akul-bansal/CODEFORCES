#include <stdio.h>
                                   // 1A - Theatre Square 
int main()
{
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    int row = (n + a - 1) / a;
    int column = (m + a - 1) / a;

    printf("%d", row * column);
    return 0;
}
