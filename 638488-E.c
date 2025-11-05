#include <stdio.h>
                                        // E - Laundry
int main(){
    int n,x,y,z;
    scanf("%d",&n);
    scanf("%d %d %d",&x,&y,&z);
    int max=x;
    if(max<y)
    max=y;
    if(max<z)
    max=z;
    int final=n*max;
    final=final+x+y+z-max;
    printf("%d",final);
    return 0;
}
