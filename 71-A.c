#include <stdio.h>
#include <string.h>
                                                    // 71-A - Way Too Long Words
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[100];
        scanf("%s", str);
        int length = strlen(str);
        char a = str[0];
        char b = str[length - 1];
        if (length < 10)
            printf("%s\n", str);
        else
            printf("%c%d%c\n", a, length - 2, b);
    }

    return 0;
}
