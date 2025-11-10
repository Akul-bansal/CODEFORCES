#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        if (t % 3 == 0)
            printf("Second\n");
        else
            printf("First\n");
    }
    return 0;
}
