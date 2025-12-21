#include <stdio.h>
                       // 1873C - Target Practice
int main()
{
    int t;
    scanf("%d", &t);
    char str[11][10];
    for (int k = 1; k <= t; k++)
    {
        int res = 0;
        for (int i = 0; i < 10; i++)
        {
            scanf("%s", str[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {

                if (str[i][j] == 'X')
                {
                    if (i == 0 || i == 9)
                        res += 1;
                    else if (i == 8 || i == 1)
                    {
                        if (j == 0 || j == 9)
                            res += 1;
                        else
                            res += 2;
                    }
                    else if (i == 2 || i == 7)
                    {
                        if (j == 0 || j == 9)
                            res += 1;
                        else if (j == 1 || j == 8)
                            res += 2;
                        else
                            res += 3;
                    }
                    else if (i == 3 || i == 6)
                    {
                        if (j == 0 || j == 9)
                            res += 1;
                        else if (j == 1 || j == 8)
                            res += 2;
                        else if (j == 2 || j == 7)
                            res += 3;
                        else
                            res += 4;
                    }
                    else
                    {
                        if (j == 0 || j == 9)
                            res += 1;
                        else if (j == 1 || j == 8)
                            res += 2;
                        else if (j == 2 || j == 7)
                            res += 3;
                        else if (j == 3 || j == 6)
                            res += 4;
                        else
                            res += 5;
                    }
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
