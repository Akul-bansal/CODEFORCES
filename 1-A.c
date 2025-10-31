#include <stdio.h>
                                   // 1A - Theatre Square 
int main()
{
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long int row = (n + a - 1) / a;
    long long int column = (m + a - 1) / a;

    printf("%lld", row * column);
    return 0;
}
