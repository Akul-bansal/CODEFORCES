#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    int small = min(n,m);
    int maxe = max(n,m);
    int count=0;
    while(small>0){
      if(small==1 && maxe==1){
        break;
      }
      if(maxe-small!=0)
    {
      small=small-1;
      maxe=maxe-2;
      count++;
    }
else{
  small=small-2;
  maxe=maxe-1;
  count++;
}
    }
    
    cout<<count<<endl;
    return 0;
}
