#include<iostream>
#include<algorithm>
#include <numeric>                // 1789A - Serval and Mocha's Array
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
        int gcd=0;
        bool result=false;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
              if(__gcd(arr[i], arr[j]) <= 2)
                result=true;
 
        }
    
        }
        if(result==true)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }
    return 0;
}
