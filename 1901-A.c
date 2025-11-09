#include <stdio.h>

int main()
{
    int t, n, k;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[j]);
        int max = 2 * (k - arr[n - 1]);

        for (int j = n - 1; j >= 1; j--)
        {
            if (max < arr[j] - arr[j - 1])
                max = arr[j] - arr[j - 1];
        }
        if (max < arr[0])
            max = arr[0];

        printf("%d\n", max);
    }
    return 0;
}
