#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a[n],sum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    long long int maxt=0;
    for(int i = 0; i < n; i++){
        maxt=max(maxt,a[i]);
    }
    if(sum%2!=0)
    cout << "NO" << endl;
    else{
        if(sum-maxt>=maxt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
