#include <stdio.h>
                          // 1766A - Extremely Round
int main(){
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        int a;
        scanf("%d",&a);
        int res=a;
        
        if(a>0 && a<10)
        printf("%d\n",a);
        else if(a>9 && a<100){
            res=res/10;
            printf("%d\n",9+res);
        }
        else if(a>99 && a<1000){
            res=res/100;
            printf("%d\n",9+9+res);

        }
         else if(a>999 && a<10000){
            res=res/1000;
            printf("%d\n",9+9+9+res);

        }
         else if(a>9999 && a<100000){
            res=res/10000;
            printf("%d\n",9+9+9+9+res);

        }
         else if(a>99999 && a<1000000){
            res=res/100000;
            printf("%d\n",9+9+9+9+9+res);

        }
         
    }
    return 0;
}
