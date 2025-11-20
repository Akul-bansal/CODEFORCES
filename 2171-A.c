#include <stdio.h>
                           
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n % 2 != 0)
            printf("0\n");
        else
        {
            int total = (n / 4) + 1;
            printf("%d\n", total);
        }
    }
    return 0;
}
