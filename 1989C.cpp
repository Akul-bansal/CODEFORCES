#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 0; i < n ; i++) {
            cin >> a[i];
        }
        vector<int> b(n+1);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int ma=0,mb=0,sp=0,sn=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i] ){
               ma+=a[i];
            }
            else if(a[i]<b[i]){
                mb+=b[i];

            }
            else{
                if(a[i]==1)
                sp++;
                if(a[i]==-1)
                sn++;
            }
        }
        while(sp--){
            if(ma>mb){
                mb+=1;
            }
            else{
                ma+=1;
            }
        }
        while(sn--){
            if(ma>mb){
                ma-=1;
            }
            else{
                mb-=1;
            }
        }
        cout<<min(ma,mb)<<endl;
    }
    return 0;
}
