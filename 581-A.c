#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int rem=0, days=0;
    if (a >= b)
    {
        days = b;
        rem = a - days;
    }
    else
    {
        days = a;
        rem = b - days;
    }
    printf("%d %d", days, rem/2);
    return 0;
}
