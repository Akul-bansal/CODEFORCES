#include <stdio.h>
#include<string.h>
                      // 1791C - Prepend and Append
int main(){
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        int n;
        scanf("%d",&n);
        char str[n];
        int count=0;
        scanf("%s",str);
        
        for (int i = 0; i < n/2; i++){
            if(str[i]+str[n-i-1]=='a')
            count+=2;
            else
            break;
        }
        printf("%d\n",n-count);
    }
    return 0;
}
