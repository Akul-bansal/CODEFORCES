#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b[2*n];
     for(int i=0;i<2*n;i++){
       b[i]=-1;
    }
    if(is_sorted(arr,arr+n)){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        int j=0;
        b[0]=arr[0];
         for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            j++;
            b[j]=arr[i+1];
        }
        else if(arr[i]>arr[i+1]){
            j++;
            b[j]=arr[i+1];
            j++;
            b[j]=arr[i+1];
        }
    }
    cout<<j+1<<endl;
     for(int i=0;i<=j;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    }
}
    return 0;
}
