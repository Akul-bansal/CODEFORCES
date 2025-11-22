#include <stdio.h>
                                  // 1866A - Ambitious Kid
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    int min;
    if (arr[0] >= 0)
        min = arr[0];
    else
        min = -arr[0];
    for (int j = 0; j < n; j++)
    {

        if (arr[j] >= 0)
        {
            if (min > arr[j])
                min = arr[j];
        }
        else
        {
            if (min > -arr[j])
                min = -arr[j];
        }
    }
    printf("%d\n", min);

    return 0;
}
