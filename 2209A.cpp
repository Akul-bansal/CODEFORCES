#include <iostream>
#include <vector>
#include <algorithm>
   //2209A
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n,c,k;
        cin>>n>>c>>k;
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]<=c){
                if(c-a[i]<=k){
                    k=k-c+a[i];
                    c=c+c;
                }
                else{
                    c=c+k+a[i];
                    k=0;
                }
            }
            else{
                break;
            }
           
    }
    cout << c << endl;
}
    return 0;
}
