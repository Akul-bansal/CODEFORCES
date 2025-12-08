#include <stdio.h>
                            // 1560A - Dislike of Threes
int main() {
    int t;
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        int k;
        scanf("%d", &k);

        int count = 0;
        int num = 1;

        while (1) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
                if (count == k) {
                    printf("%d\n", num);
                    break;
                }
            }
            num++;
        }
    }

    return 0;
}
