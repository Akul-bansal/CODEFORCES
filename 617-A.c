#include <stdio.h>
                                              // 617A - Elephant
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    while (x > 0)
    {
        if (x >= 5)
        {
            count++;
            x -= 5;
        }
        else if (x == 4)
        {
            count++;
            x -= 4;
        }
        else if (x == 3)
        {
            count++;
            x -= 3;
        }
        else if (x == 2)
        {
            count++;
            x -= 2;
        }
        else
        {
            count++;
            x -= 1;
        }
    }

    printf("%d", count);
    return 0;
}
