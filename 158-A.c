#include <stdio.h>
                                                              // 158A - Next Round
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int t = arr[k - 1];
    if (t != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= t)
            {
                count++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > t)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
