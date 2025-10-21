#include <stdio.h>
                                                                 // A. Coin Transformation (2043-A)
int main()
{
    int n;
    long long int a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a);
        long long int count = 1;
        if (a <= 3)
            printf("1\n");
        else
        {
            while (a > 3)
            {
                a = a / 4;
                count = count * 2;
            }
            printf("%lld\n", count);
        }
    }
    return 0;
}
