#include <stdio.h>
                                                           // A - Tram (116-A)
int main()
{
    int n, capacity = 0;
    scanf("%d", &n);
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int minimum_capacity = 0;
    for (int i = 0; i < n; i++)
    {
        capacity = capacity + arr[i][1];
        capacity = capacity - arr[i][0];

        if (minimum_capacity < capacity)
            minimum_capacity = capacity;
    }
    printf("%d", minimum_capacity);
    return 0;
}
