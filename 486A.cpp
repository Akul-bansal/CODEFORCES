#include <iostream>
#include <vector>
#include <algorithm>
     // 486A Calculating Function 
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long res=n/2;
    if(n%2==0)
       cout<<res;
       else
       cout<<res-n;
    return 0;
}
