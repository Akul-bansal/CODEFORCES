#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long int x;
        cin >> n >> x;
        long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long pref[n];
        pref[0] = arr[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }
         
         long long ans=0;
       
        for(int i=0;i<n;i++){
            if(pref[i]>x){
                break;
            }
            pref[i]=x-pref[i];
            ans+=pref[i]/(i+1)+1;
        }
        cout << ans << endl;
    }
    return 0;
}
