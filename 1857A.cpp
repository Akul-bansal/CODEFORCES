#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;
        string target = "abc";

        for (int i = 0; i < 3; i++) {
            if (s[i] == target[i])
                cnt++;
        }

        if (cnt >= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
