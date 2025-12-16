#include <stdio.h>
                     // 2104A - Three Decks
int main(){
    int t;
    scanf("%d",&t);
    long int a,b,c;
    for(int i=0;i<t;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        long int k=a+b+c;
        if(k%3==0){
            if(k/3>=b && k/3>a)
            printf("YES\n");
            else
            printf("NO\n");

        }
        else
            printf("NO\n");

    }
    return 0;
}
