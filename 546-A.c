#include <stdio.h>

int main() {
    int k,n,w;
    int dollar=0;
    scanf("%d %d %d",&k,&n,&w);
    
       for(int i=1;i<=w;i++){
        dollar+=i*k;
       }
       if(dollar>n)
       printf("%d",dollar-n);
       else
       printf("0");
    return 0;
}
