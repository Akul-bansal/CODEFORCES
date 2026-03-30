#include <iostream>
#include <vector>
#include <algorithm>
    //2210B
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       long int mint = 9999999;
        int count=0;
        for(int i=0;i<n;i++){
            
            if(i+1>=arr[i] )
            count++;
            
        }
        cout<<count<<endl;
        
    }
    return 0;
}
