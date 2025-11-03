#include <stdio.h>
                                                         // 155A - I_love_\%username\%
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count++;
        }
        if (min > arr[i])
        {
            min = arr[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
