#include<iostream>
#include<algorithm>
                       // 1857A - Array Coloring
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
        int odd=0;
         for(int i=0;i<n;i++){
           if(arr[i]%2!=0)
           odd++;
        }
        if(odd%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
