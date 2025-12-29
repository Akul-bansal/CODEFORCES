#include<iostream>
#include<algorithm>
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
         for(int i=0;i<n;i++){
            cout<<n+1-arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
