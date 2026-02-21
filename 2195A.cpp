#include <iostream>
#include <vector>
#include <algorithm>
     //2195A
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin>>n;
        unsigned int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            
             if(arr[i]==67)
               count2++;
        }
        if(count2>0)
           cout << "Yes\n";
        else
           cout << "No\n";
    }
    return 0;
}
