#include <stdio.h>

int main()
{
    int t;
    long long int n, k;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        scanf("%lld %lld", &n, &k);
        long long int start = n - k + 1;
        if (start < 1)
            start = 1;
        int odd_count = (n + 1) / 2 - start / 2;
        if (odd_count % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
