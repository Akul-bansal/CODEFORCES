#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long sx = (x + k - 1) / k;
        long long sy = (y + k - 1) / k;

        long long ans = 2 * max(sx, sy);

        
        if (sx > sy)
            ans--;

        cout << ans << "\n";
    }
    return 0;
}
