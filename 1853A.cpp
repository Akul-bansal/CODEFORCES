#include<iostream>
#include<algorithm>            // 1853A - Desorting
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
        if(is_sorted(arr,arr+n)){
        int min_difference=1000000000;
        for(int i=0;i<n-1;i++){
            if(min_difference>arr[i+1]-arr[i])
            min_difference=arr[i+1]-arr[i];
        }
        cout<<min_difference/2+1<<endl;
    }
    else{
        cout<<"0\n";
    }
}
    return 0;
}
