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
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long int res=arr[0];
        for(int i=1;i<n;i++){
            res=res&arr[i];
            if(res==0)
            break;
        }
        cout<<res<<endl;
    }
    return 0;
}
