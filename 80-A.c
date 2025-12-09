#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int next = n + 1;

    while (1) {
        int prime = 1;
        for (int i = 2; i * i <= next; i++) {
            if (next % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) break;
        next++;
    }

    if (next == m)
        printf("YES");
    else
        printf("NO");

    return 0;
}
