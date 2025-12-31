#include<iostream>
#include<algorithm>         // 1783A - Make it Beautiful
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int w=arr[n-1];
        if(arr[n-1]!=arr[n-2]){
            cout<<"YES\n";
            for(int i=n-1;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<n;i++){
            if(w==arr[i])
            count++;
        }
        if(count==n)
        cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<w<<" "<<arr[0]<<" ";
            for(int i=n-2;i>0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";

        }
        }
        
    }
    return 0;
}
