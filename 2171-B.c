#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        for(int j = 1; j < n-1; j++){
            if(arr[j]==-1)
            arr[j]=0;
        }
        if(arr[0]==-1 && arr[n-1]!=-1){
            arr[0]=arr[n-1];
        }
         if(arr[n-1]==-1 && arr[0]!=-1){
            arr[n-1]=arr[0];
        }
         if(arr[n-1]==-1 && arr[0]==-1){
            arr[n-1]=0;
            arr[0]=0;
        }
            if(arr[n-1]>arr[0])
        printf("%d\n",arr[n-1]-arr[0]);
        else
        printf("%d\n",arr[0]-arr[n-1]);

        for(int j = 0; j < n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
        
    }
    return 0;
}
