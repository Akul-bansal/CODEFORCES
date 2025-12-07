#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[105];
    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }


    int count = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1])
            count++;
    }

    if (count >= 26)
        printf("YES");
    else
        printf("NO");

    return 0;
}
