#include <stdio.h>
                           // 1814A - Coins
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int k,n;
        scanf("%lld %lld",&n,&k);
        if(n%2==0)
        printf("YES\n");
        else if (k%2==1 && n>=k)
        printf("YES\n");
        else
        printf("NO\n");

        
    }
    return 0;
}
