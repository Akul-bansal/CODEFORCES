#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int j = 1; j <= t; j++)
    {
        int n;
        scanf("%d", &n);

        char a[1000][4006];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }

        char s[4005] = "";
        char fronts[4005], backs[4005];

        for (int i = 0; i < n; i++)
        {

            strcpy(fronts, a[i]);
            strcat(fronts, s);
            strcpy(backs, s);
            strcat(backs, a[i]);

            if (strcmp(fronts, backs) < 0)
            {
                strcpy(s, fronts);
            }
            else
            {
                strcpy(s, backs);
            }
        }

        printf("%s\n", s);
    }

    return 0;
}
