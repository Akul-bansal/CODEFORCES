#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long x,y,n;
    cin>>x>>y;
    cin>>n;
    long long ans=0;
    if(n%3==0){
        if((n-3)%6==0){
            ans=y-x;
        }
        else{
            ans=x-y;
        }
    }
    else if(n%3==1){
        if((n-1)%6==0){
            ans=x;
        }
        else{
            ans=-x;
        }
    }
    else{
        if((n-2)%6==0){
            ans=y;
        }
        else{
            ans=-y;
        }
    }
    if(ans<0){
        long long int temp=-ans;
        temp=temp%1000000007;
        if(temp!=0)
        cout<<1000000007-temp;
        else        
        cout<<0;
    }
    else{
        if(ans>=1000000007)
        cout<<ans-1000000007;
        else
        cout<<ans;
    }
    return 0;
}
