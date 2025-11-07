#include <stdio.h>
                                      // 1692-A - Marathon
int main()
{
    int n;
    int a, b, c, d;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;
        printf("%d\n", count);
    }
    return 0;
}
