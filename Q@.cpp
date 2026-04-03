#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long a=0;
        long long k= n*2 - 1;
        a=sqrt(k);
        if(a%2==0)
        cout<<a/2-1<<endl;
        else
        cout<<a/2<<endl;
    }
    return 0;
}
