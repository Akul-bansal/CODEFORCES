#include <iostream>
using namespace std;
        // 734A Anton and Dainik
int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int A = 0, D = 0;
    for (char c : s) {
        if (c == 'A') A++;
        else D++;
    }

    if (A > D)
        cout << "Anton";
    else if (D > A)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
