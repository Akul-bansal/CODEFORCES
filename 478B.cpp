#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n , m ;
    cin>> n >> m;
    long long res= (n%m)*((n/m)+1)*(n/m)/2 + (m-(n%m))*((n/m)*((n/m)-1))/2;
    
    long long v=(n-m+1)*(n-m)/2;
    cout<<res<<" "<<v;
    return 0;
}
