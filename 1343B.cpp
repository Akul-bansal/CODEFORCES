#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int half = n / 2;

        // first half: even numbers
        for (int i = 1; i <= half; i++) {
            cout << 2 * i << " ";
        }

        // second half: odd numbers
        int sum_even = half * (half + 1);
        int sum_odd = 0;

        for (int i = 1; i < half; i++) {
            cout << 2 * i - 1 << " ";
            sum_odd += (2 * i - 1);
        }

        // last element
        cout << sum_even - sum_odd << "\n";
    }
    return 0;
}
