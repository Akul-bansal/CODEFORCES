#include <stdio.h>
                         // 1915A - Odd One Out
int main() {
    int t;
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a == b) {
            printf("%d\n", c);
        } else if (a == c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", a);
        }
    }

    return 0;
}
