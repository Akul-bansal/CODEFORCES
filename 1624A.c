#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[j]);
        }
        long long int max = arr[0];
        long long int min = arr[0];
        for (int j = 0; j < n; j++)
        {
            if (max < arr[j])
                max = arr[j];
            if (min > arr[j])
                min = arr[j];
        }

        printf("%lld\n", max - min);
    }
    return 0;
}
