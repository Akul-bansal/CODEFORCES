#include <stdio.h>
                          // 1805A - We Need the Zero
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
            
        }
        
        int x=arr[0];
         for(int j=0;j<n-1;j++){
            x=x^arr[j+1];
            
        }
        if(n%2!=0)
        printf("%d\n",x);
        else{
            if(x==0)
        printf("0\n");
            else
        printf("-1\n");

        }
    }
    return 0;
}
