#include <bits/stdc++.h>
using namespace std;
     // 1760A
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        cout << v[1] << endl;  // middle element
    }
    return 0;
}
