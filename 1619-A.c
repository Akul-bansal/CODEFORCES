#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int n = strlen(s);
        if (n % 2 != 0) {
            printf("NO\n");
            continue;
        }

        int square = 1; // assume yes
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[i + n/2]) {
                square = 0;
                break;
            }
        }

        if (square==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
