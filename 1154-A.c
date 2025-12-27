#include <stdio.h>

int main() {
    int a[4];
    for(int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    // simple sort
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int sum = a[3]; // a + b + c

    printf("%d %d %d\n",
           sum - a[2],
           sum - a[1],
           sum - a[0]);

    return 0;
}
