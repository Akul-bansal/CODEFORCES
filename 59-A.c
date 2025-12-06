#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int upper = 0, lower = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else
            lower++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (upper > lower && s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        if (upper <= lower && s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    printf("%s", s);
    return 0;
}
