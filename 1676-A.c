#include <stdio.h>
                        // 1676A - Lucky?
int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[10];
        scanf("%s", s);

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < 3; i++) {
            sum1 += s[i];
        }
        for (int i = 3; i < 6; i++) {
            sum2 += s[i];
        }

        if (sum1 == sum2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
