#include <stdio.h>
                                        // 2149A - Be Positive
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        int count = 0, count_1 = 0, countfinal = 0;
        scanf("%d", &a);
        int arr[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < a; j++)
        {
            if (arr[j] == 0)
                count++;
            else if (arr[j] == 1)
                ;
            else
                count_1++;
        }
        if (count_1 % 2 != 0)
            countfinal += 2;
        printf("%d\n", count + countfinal);
    }
    return 0;
}
