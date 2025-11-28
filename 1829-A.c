#include <stdio.h>
                        // 1829A - Love Story
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[11];
        scanf("%s", str);
        char str1[] = "codeforces";
        int count = 0;
        for (int j = 0; j < 11; j++)
        {
            if (str[j] != str1[j])
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
