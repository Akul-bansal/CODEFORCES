#include <stdio.h>
#include <string.h>
                                                                     // 339A - Helpful Maths
int main()
{
    char str[1000];
    char temp;
    scanf("%[^\n]", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 2; j += 2)
        {
            if (str[j] > str[j + 2])
            {
                temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
            }
        }
    }
    printf("%s\n", str);

    return 0;
}
