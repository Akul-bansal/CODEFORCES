#include<iostream>
#include<algorithm>
                      // 1903A - Halloumi Boxes
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,b;
        cin>>n>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(is_sorted(arr,arr+n))
        cout<<"YES"<<endl;
        else{
            if(b>1)
        cout<<"YES"<<endl;
            else
        cout<<"NO"<<endl;

        }
    }
    return 0;
}
