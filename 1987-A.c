#include <stdio.h>
                        // 1987A - Upload More RAM

int main()
{
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        int result = (n - 1) * k + 1;
        printf("%d\n", result);
    }
    return 0;
}
