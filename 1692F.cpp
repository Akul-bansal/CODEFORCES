#include <bits/stdc++.h>
using namespace std;
    // 1692F
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(10,0);
        vector<int> a;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x%=10;

            if(cnt[x]<3){
                a.push_back(x);
                cnt[x]++;
            }
        }

        int m=a.size();
        bool ok=false;

        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                for(int k=j+1;k<m;k++){
                    if((a[i]+a[j]+a[k])%10==3){
                        ok=true;
                    }
                }
            }
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
