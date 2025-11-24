#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int sum = 0;
        sum += n % 10;
        n = n / 10;
        sum += n % 10;
        printf("%d\n", sum);
    }
    return 0;
}
