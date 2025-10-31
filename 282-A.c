#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char arr[] = "++X";
        char brr[] = "X++";
        char str[100];
        scanf("%s", str);
        int result = strncmp(str, arr, 3);
        int res = strncmp(str, brr, 3);
        if (result == 0 || res == 0)
            ans++;
        else
            ans--;
    }
    printf("%d", ans);
    return 0;
}
