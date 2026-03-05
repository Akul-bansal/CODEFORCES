#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    
   
   string s;
   if(t!=10){
   for(int i=0;i<n;i++){
   s+=to_string(t);
   }
   cout<<s<<endl;
}
    else{
        for(int i=0;i<n-1;i++){
            s+="0";
        }
        
    
   if(n==1 && t==10)
   cout<<-1<<endl;
   else 
    cout<<1<<s<<endl;
    }
    return 0;
}
