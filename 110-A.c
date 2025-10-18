#include <stdio.h>
                                                                // 110A - Nearly Lucky Number
int main()
{
    long long int n;
    int t, count = 0;
    scanf("%lld", &n);

    if (n != 0)
    {
        while (n != 0)
        {
            t = n % 10;
            if (t == 4 || t == 7)
            {
                count++;
            }
            n = n / 10;
        }

        if (count == 4 || count == 7)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}
