#include <stdio.h>
                                                 // B. Back to Zero
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
       scanf("%d",&n); 
       long long  int arr[n];
        for(int j=0;j<n;j++){
            scanf("%lld",&arr[j]);
            
        }
        long long int loc=0;
        for(int j=0;j<n;j++){
           if(arr[j]%2!=0)
           loc+=arr[j];
           else
           loc-=arr[j];
        }
        if(loc==0)
        printf("YES\n");
        else
        printf("NO\n");
 
    }
    return 0;
}
