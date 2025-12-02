#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        char s[6];
        scanf("%s", s);

        int a = 0, b = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
        }

        if (a > b) printf("A\n");
        else printf("B\n");
    }
    return 0;
}
