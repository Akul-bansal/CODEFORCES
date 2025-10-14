#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int a, b, n;
    for (int i = 0; i < x; i++)
    {
        int count = 0;
        scanf("%d", &n);
        for (a = 0; a < n; a++)
        {
            for (b = 0; b < n; b++)
            {
                if (a + b == n)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
