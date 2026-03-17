#include<bits/stdc++.h>//Problem-2153A
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=1,i;
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
            cin>>arr[i];
            
        sort(arr,arr+n);
        for(i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}convert to java
