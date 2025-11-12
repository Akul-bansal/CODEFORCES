#include <stdio.h>
                                            // 1877A - Goals of Victory
int main(){
    int t;
    int n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int arr[n-1];
        int sum=0;
        for(int j=0;j<n-1;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        printf("%d\n",-sum);
    }
    return 0;
}
