#include <iostream>
using namespace std;
   // Code
int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }

        int side = 0;

        // find side using equal x or y
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (x[i] == x[j]) {
                    side = abs(y[i] - y[j]);
                }
                if (y[i] == y[j]) {
                    side = abs(x[i] - x[j]);
                }
            }
        }

        cout << side * side << endl;
    }

    return 0;
}
