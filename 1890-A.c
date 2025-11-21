#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        int count = 0, finalcount = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
                count++;
        }

        if (count >= 3)
            printf("NO\n");
        else if (count <= 1)
            printf("YES\n");
        else if (count == 2)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[0] == arr[i])
                    finalcount++;
            }
            if (n % 2 == 0)
            {
                if (finalcount == n / 2)
                    printf("YES\n");
                else
                    printf("NO\n");
            }

            else
            {
                if (finalcount == n / 2 || finalcount == n / 2 + 1)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }

    return 0;
}
