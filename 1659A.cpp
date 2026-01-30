#include <iostream>
#include <vector>
#include <algorithm>
       // 1659A Red vs Blue
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        string s;
        cin >> n >> a >> b;
        int group=b+1;
        int atime=a/(b+1);
        int rema=a%(b+1);
        for(int i=1;i<=b+1;i++){
            for(int j=1;j<=atime;j++){
                s+='R';
            }
            if(rema>0){
                s+='R';
                rema--;
            }
            if(i!=b+1){
                s+='B';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
