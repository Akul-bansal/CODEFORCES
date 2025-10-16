#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    int count = 0, count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
            count1++;
        if (b > a)
            count2++;
    }
    if (count1 > count2)
        printf("Mishka");
    else if (count2 > count1)
        printf("Chris");
    else
        printf("Friendship is magic!^^");

    return 0;
}
