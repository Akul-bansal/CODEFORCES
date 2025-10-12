#include <stdio.h>

int main()
{
    long int n;
    int temp;
    long long int a, b;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            temp = a % b;
            printf("%lld\n", b - temp);
        }
    }

    return 0;
}
