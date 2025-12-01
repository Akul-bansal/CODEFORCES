#include <stdio.h>
                         // 1850A - To My Critics
int main() {
    int t;
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b >= 10 || b + c >= 10 || c + a >= 10)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
