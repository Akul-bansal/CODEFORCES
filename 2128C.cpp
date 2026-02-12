#include <iostream>
using namespace std;
     // 2128C leftmost below
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long mn = arr[0];
        bool fact = true;

        for (int i = 1; i < n; i++) {
            if (arr[i] >= 2 * mn) {
                fact = false;
                break;
            }
            if (arr[i] < mn)
                mn = arr[i];
        }

        if (fact)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
