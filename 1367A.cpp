#include <iostream>
using namespace std;
     // 1367A short substring 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string res = "";
        res += s[0];

        for (int i = 1; i < n; i += 2) {
            res += s[i];
        }

        cout << res << endl;
    }
    return 0;
}
