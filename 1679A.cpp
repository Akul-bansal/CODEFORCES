#include <iostream>
#include <vector>
#include <algorithm>
                       // 1679A - AvtoBus
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin>>n;
        long long int mint=0,maxt=0;
        if(n%6==0){
            mint = n/6;
        }
        else{
            if((n%6)>=4){
            if((n%6)%4==0)
            mint=n/6+(n%6)/4;}
            else{
                if(((n-4)%6)%4==0)
            mint=2+(n-4)/6;

            }
        }
        if(n%4==0)
        maxt=n/4;
        else{
            if(((n-6)%4)==0)
            maxt=1+(n-6)/4;
        }
        if(mint==0 && maxt==0)
        cout<<"-1\n";
        else
        cout<<mint<<" "<<maxt<<endl;
    }
    return 0;
}
