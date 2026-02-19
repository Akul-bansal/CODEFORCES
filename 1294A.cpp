#include <iostream>
using namespace std;
    // 1294A collecting coins
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long mx = max(a, max(b, c));
        long long required = (mx - a) + (mx - b) + (mx - c);

        if (required > n) {
            cout << "NO\n";
        }
        else {
            long long remaining = n - required;
            if (remaining % 3 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
