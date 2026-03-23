#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        int s;
        cin >> n >> s;
        long long q=n;
        string str=to_string(n);
        long long sum=0;
        int count=0;
        while(q!=0){
            sum+=q%10;
            q/=10;
            count++;
        }
      if(sum<=s){
          cout<<0<<endl;
      }
      else{
        long long sum=str[0]-'0';
        if(sum>=s)
        cout<<(long long)pow(10,count)-n<<endl;

        else{
             long long ans=0;
             for(int i=1;i<str.size();i++){
                 sum+=str[i]-'0';
               if(sum>=s){
                   ans=(long long)pow(10,count-i)-n%((long long)pow(10,count-i));
                   break;
               }
             }
             cout<<ans<<endl;
        }
    }
           
      
    }
    return 0;
}
