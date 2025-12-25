#include <stdio.h>
                      // 1829B - Blank Space
int main(){
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        int n;
    scanf("%d",&n);
    int arr[n],tot=0;
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    tot+=arr[i];
    }
    int count=1,max=1;
    
    for(int i=0;i<n-1;i++){

        if(arr[i]+arr[i+1]==0){
            count++;
            if(max<count)
            max=count;
        }
        else
        count=1;
    }
    if(tot!=n)
    printf("%d\n",max);
    else
    printf("0\n");
    }
    return 0;
}
