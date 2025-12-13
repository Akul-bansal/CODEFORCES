#include <stdio.h>
#include <string.h>
       // 96-A Football
int main() {
    char s[105];
    scanf("%s", s);

    int count = 1;
    for (int i = 1; s[i]; i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count == 7) {
                printf("YES");
                return 0;
            }
        } else {
            count = 1;
        }
    }

    printf("NO");
    return 0;
}
