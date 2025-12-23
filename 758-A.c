#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
    }

    long long moves = 0;
    for (int i = 0; i < n; i++) {
        moves += (mx - a[i]);
    }

    printf("%lld\n", moves);
    return 0;
}
