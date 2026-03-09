#include <bits/stdc++.h>
using namespace std;
   //1846E1 snowfall
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        bool ok = false;

        for (long long k = 2; k * k <= n; k++) {
            long long sum = 1 + k;
            long long term = k;

            while (sum < n) {
                term *= k;
                sum += term;
            }

            if (sum == n) {
                ok = true;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
