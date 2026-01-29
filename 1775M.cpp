#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
  long long int n;
  cin>>n;
  long long int mint=0;
  if(n%2==0)
  cout<<n/2<<" "<<n/2<<endl;
  else{
 
 
 
  for(long long int i=2; i*i<=n;i++){
 
  if(n%i==0){
  mint=i;
  break;}
  }
  if(mint!=0)
  cout<<n/mint<<" "<<n-(n/mint)<<endl;
 else
      cout<<1<<" "<<n-1<<endl;
  }
 
  }
    return 0;
}
