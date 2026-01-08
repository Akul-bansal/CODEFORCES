#include <iostream>
#include <vector>
#include <algorithm>
           // 1374-B multiply by 2 divide by 6
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin>>n;
        int count=0;
        while(n>=6){
            if(n%6==0){
            n=n/6;
            count++;
            }
            else{
                n*=2;
                count++;
            }
        }
        if(n==6)
        cout<<count+1<<endl;
        else if(n==1)
        cout<<count<<endl;
        else if(n==3)
        cout<<count+2<<endl;
        else
        cout<<"-1\n";

    }
    return 0;
}
