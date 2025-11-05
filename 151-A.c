#include <stdio.h>
                                            // A - Soft Drinking
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int a = (k * l) / nl;
    int b = p / np;
    int x = c * d;
    int min = a;
    if (min > b)
        min = b;
    if (min > x)
        min = x;
    int total = min / n;
    printf("%d", total);
    return 0;
}
