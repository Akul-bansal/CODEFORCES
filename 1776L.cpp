#include <iostream>
#include <vector>
#include <algorithm>
       // 1776L Controllers
using namespace std;

int main() {
    int t;
    cin>>t;
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<t;i++){
        if(s[i]=='+')
        count++;
    }
    int n;
    cin>>n;
    long long int a,b;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==b && count==t/2){
            cout<<"YES"<<endl;
        }
         else if(a==b &&count!=t/2){
            cout<<"NO"<<endl;
        }
         else{
        long long j=min(a,b);
        long long k=max(a,b);
        long long new_a=j*count;
        long long new_b=j*(t-count);
            long long res=abs(new_a-new_b);
            if(res%(abs(a-b))==0 && (abs(a-b)*min(count,t-count))>=res)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
    return 0;
}
