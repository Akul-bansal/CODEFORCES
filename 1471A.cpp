#include <iostream>
#include <vector>
#include <algorithm>
    // 1471A Strange Partition
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       long long int n,x;
        cin >> n >> x;
       long long int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        long long int maxt=0,mint=0;
        for(int i=0;i<n;i++){
            if(arr[i]%x==0)
               maxt+=arr[i]/x;
               else
                maxt+=(arr[i]/x)+1;
            mint+=arr[i];
            }
       if(mint%x==0)
       mint=mint/x;
       else
       mint=(mint/x)+1;
        cout<<mint<<" "<<maxt<<endl;
    }
    return 0;
}
