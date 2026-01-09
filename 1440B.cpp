#include <iostream>
#include <vector>
#include <algorithm>
// 1440B Sum of Medians
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int b=n*k;
        int arr[b];
        for(int i=0;i<b;i++)
        cin>>arr[i];
        int count=0,sum=0;
        int a=n/2+1;
        
            while(count!=k){
                sum+=arr[b-a];
                count++;
                a+=(n/2+1);
            }
        
        cout<<sum<<endl;
    }
    return 0;
}
