#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        scanf("%d", &n);
        int arr[n];
        int count = 0, count1 = 0, k;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                count++;
        }
        if (count == 0)
            printf("1\n");
        else if (count % 2 != 0)
            printf("-1\n");
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    count1++;
                    if (count1 == count / 2)
                        k = i + 1;
                }
            }
            printf("%d\n", k);
        }
    }
    return 0;
}
