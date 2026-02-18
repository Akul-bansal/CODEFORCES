#include <iostream>
using namespace std;
 //707A
int main() {
    int n, m;
    cin >> n >> m;

    char pixel;
    bool color = false;

    for (int i = 0; i < n * m; i++) {
        cin >> pixel;
        if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
            color = true;
        }
    }

    if (color) cout << "#Color";
    else cout << "#Black&White";

    return 0;
}
