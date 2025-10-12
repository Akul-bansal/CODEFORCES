#include <stdio.h>

int main()
{                                             // Problem 2070A - George and Accommodation
    int n, p, q, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &p, &q);
        if (q > p + 1)
            count++;
    }
    printf("%d", count);
    return 0;
}
