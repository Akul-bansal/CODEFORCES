#include <stdio.h>
#include<string.h>
int main(){
    char str1[120];
    char str2[120];
    scanf("%s",str1);
    scanf("%s",str2);
    int length=strlen(str1);
    for(int i=0;i<length;i++){
        if(str1[i]==str2[i])
        printf("0");
        else
        printf("1");

    }
    return 0;
}
