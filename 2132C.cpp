#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
   
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin>>n;
        long long int res=1,count=-1;
        for(long long int i=1;i<=n;i++){
            if(res>n)
                break;
            res*=3;
            count++;
        }
        long long ans=0;
        long long temp=n;
       
        while(temp>0){
           long long f=temp/pow(3,count);
           ans+= f*((pow(3,count+1)) + (count*(pow(3,count-1))));
            temp-=f*pow(3,count);
            count--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
