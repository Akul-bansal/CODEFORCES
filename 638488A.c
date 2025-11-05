#include <stdio.h>
                                        // A. Game of Numbers
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    if(count%2!=0)
    printf("Chutki");
    else
    printf("Bheem");
 
    return 0;
}
