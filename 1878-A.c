#include <stdio.h>
                                                   // 1878-A - How Much Does Daytona Cost?
int main()
{
    int a, n, k;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (k == arr[j])
                count++;
        }
        if (count > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
