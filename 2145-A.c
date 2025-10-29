#include <stdio.h>
                                         
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      scanf("%d",&a);
        if(a%3==0)
        printf("0\n");
        else{
            b=a%3;
            printf("%d\n",3-b);
        }
    }
    return 0;
}
