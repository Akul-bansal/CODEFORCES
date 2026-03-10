#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        int arr[3];
        int count=0;
        for(long long i=2;i<=n;i++){
            if(n%i==0){
                arr[count]=i;
                count++;
                n/=i;
            }
            if(count==2 && arr[1]<n){
                arr[2]=n;
                count++;
                break;
            }
        }
        if(count<3)
        cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        }
    }
    return 0;
}
