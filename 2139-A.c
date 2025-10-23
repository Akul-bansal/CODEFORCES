#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
            printf("0\n");
        else if (a % b == 0 || b % a == 0)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
