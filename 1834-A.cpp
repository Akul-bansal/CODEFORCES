#include<iostream>
#include<algorithm>          // 1834A - Unit Array
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        int arr[n];
        int count=0,res=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==-1)
            count++;
        }
        if(n<=3)
        cout<<count<<endl;
        else{
            if(count%2==0){
                    while(sum<0){
                        sum+=4;
                        res+=2;
                    }
                cout<<res<<endl;
            }
            else{
                res=1;
                sum+=2;
                      while(sum<0){
                        sum+=4;
                        res+=2;
                    }
                cout<<res<<endl;
            }
        }
    }
    return 0;
}
