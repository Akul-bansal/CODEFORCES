#include <stdio.h>
                                                                // ( 1296-A ) - Array with Odd Sum
int main()
{
    int n, t;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        scanf("%d", &t);
        int arr[t];

        for (int i = 0; i < t; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count = 0;

        for (int i = 0; i < t; i++)
        {

            if (arr[i] % 2 == 0)
            {
                count++;
            }
        }
        if (t % 2 == 0)
        {
            if (count == 0 || count == t)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
        {
            if (count == t)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
