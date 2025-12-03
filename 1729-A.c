#include <stdio.h>
                               // 1729A - Two Elevators
int main() {
    int t;
    scanf("%d", &t);

   for(int i=0;i<t;i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int time1 = a - 1;
        if (time1 < 0) time1 = -time1;

        int t2a = b - c;
        if (t2a < 0) t2a = -t2a;
        int t2b = c - 1;
        if (t2b < 0) t2b = -t2b;
        int time2 = t2a + t2b;

        if (time1 < time2)
            printf("1\n");
        else if (time2 < time1)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}
