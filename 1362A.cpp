#include <iostream>
#include <vector>
#include <algorithm>
     // 1362A Johny and ancient computer
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a,b,count=0;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            
        }
         else{
        if(a>b){
            while(a!=b){
                if(a%2==0){
                   a=a/2;
                    count++;
                }
                else
                break;
            }
        }
        else{
            while(a!=b){
                if(b%2==0){
                    b=b/2;
                    count++;
                }
                else
                break;
            }
        }
       if(count%3==0 && count!=0 && a==b){
           cout<<count/3<<endl;
       }
       else if(count%3==1 && a==b){
           cout<<count/3+1<<endl;
       }
       else if(count%3==2 && a==b){
           cout<<count/3+1<<endl;
        
       }
       else{
           cout<<-1<<endl;
    }
}
}
    return 0;
}
