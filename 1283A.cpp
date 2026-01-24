#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;

        int current = h * 60 + m;
        int remaining = 1440 - current;

        cout << remaining << "\n";
    }
    return 0;
}
