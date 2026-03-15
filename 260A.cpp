#include <iostream>
#include <vector>
#include <algorithm>
     //260A Adding digits
using namespace std;

int main() {
   long long int a,b,n;
    cin>>a>>b>>n;
    bool ok=false;
    for(int i=0;i<10;i++){
        if((a*10+i)%b==0){
           a=a*10+i;
           ok=true;
           break;
        
    }
}
if(ok==false)
   cout<<-1<<endl;
   else{
       string to=to_string(a);
       for(int i=0;i<n-1;i++){
           to+="0";
       }
       cout << to << endl;

       
    }
    return 0;
}
