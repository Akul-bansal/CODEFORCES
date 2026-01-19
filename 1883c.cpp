#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int mint=10000,count=0;
        
        for(int i=0;i<n;i++) {
            if(arr[i]%2==0)
               count++;

               if(arr[i]%k!=0)
            mint = min(mint, k-(arr[i]%k));
            else
            mint=0;
        }
        if(k==4){
            if(count>=2)
            cout<<0<<endl;
            else if(count==1)
            cout<<min(1,mint)<<endl;
            else
            cout<<min(mint,2)<<endl;
            
        }
        else{
            if(mint!=0)
            cout << mint << endl;
            else
            cout << 0 << endl;
        }
    }
    return 0;
}
