#include <stdio.h>
#include <string.h>
                      // 236A - Boy or Girl
int main() {
    char s[110];
    int freq[26] = {0}, count = 0;

    scanf("%s", s);

    for(int i = 0; s[i]; i++)
        freq[s[i] - 'a'] = 1;

    for(int i = 0; i < 26; i++)
        count += freq[i];

    if (count % 2 == 1)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");

    return 0;
}
