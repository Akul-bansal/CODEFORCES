#include <stdio.h>

int main()
{
    int n, a;
    float total = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        total += a / 100.0;
    }

    long double percent = (total / n) * 100;
    printf("%.12Lf", percent);
    return 0;
}
