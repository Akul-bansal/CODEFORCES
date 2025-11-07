#include <stdio.h>

int main(){
    int n,a;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==1)
        count++;
    }
    if(count>=1)
    printf("HARD");
    else
    printf("EASY");
    return 0;
}
