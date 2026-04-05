#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
       long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int maxt=0;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            maxt=max (maxt,(arr[i]^arr[j]));
        }
       }
         cout<<maxt<<endl;
    }
    return 0;
}
