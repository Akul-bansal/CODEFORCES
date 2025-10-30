#include <stdio.h>

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    for (int i = 1; i <= 15; i++)
    {
        int a = (k * i) % 10;
        if (a == r || a==0)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
