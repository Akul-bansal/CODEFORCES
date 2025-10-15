#include <stdio.h>

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int t, a;
    for (int i = 0; i < 5; i++)
    {
        int total = 0;
        for (int j = 0; j < 5; j++)
        {
            total += arr[i][j];
            if (total == 1)
                t = i;
        }
    }
    for (int j = 0; j < 5; j++)
    {
        int tot1 = 0;
        for (int i = 0; i < 5; i++)
        {
            tot1 += arr[i][j];
            if (tot1 == 1)
                a = j;
            ;
        }
    }

    int out = 0;
    if (t > 2)
        out += t - 2;
    else
        out += 2 - t;
    if (a > 2)
        out += a - 2;
    else
        out += 2 - a;
    printf("%d", out);
    return 0;
}
