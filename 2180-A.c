#include <stdio.h>

int main(){
    int t,a,b,l;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%d %d %d",&l,&a,&b);
    int max=a;
    int res=-1;
    for(int j=1;res!=a;j++){
        res=(a+j*b)%l;
        if(max<res)
        max=res;
    }
    printf("%d\n",max);
    }
    return 0;
}
