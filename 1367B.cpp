#include <bits/stdc++.h>
using namespace std;
       // 1367B even array
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++) {
            if ((i % 2) != (a[i] % 2)) {
                if (i % 2 == 0) c0++;   // even index, wrong parity
                else c1++;            // odd index, wrong parity
            }
        }

        if (c0 != c1) cout << -1 << "\n";
        else cout << c0 << "\n";
    }
    return 0;
}
