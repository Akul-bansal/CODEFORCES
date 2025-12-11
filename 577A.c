#include <stdio.h>

int main() {
    long long n, x;
    scanf("%lld %lld", &n, &x);

    long long count = 0;
    for (long long i = 1; i <= n; i++) {
        if (x % i == 0) {
            long long j = x / i;
            if (j <= n)
                count++;
        }
    }

    printf("%lld", count);
    return 0;
}
