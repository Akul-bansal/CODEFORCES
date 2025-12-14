#include <stdio.h>
#include <string.h>
                      // 41A - Translation
int main() {
    char a[110], b[110];
    scanf("%s %s", a, b);

    int len = strlen(a);
    int len1=strlen(b);
  
if(len!=len1)
  printf("NO");
  else{
    for(int i = 0; i < len; i++) {
        if (a[i] != b[len - i - 1]) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");}
    return 0;
}
