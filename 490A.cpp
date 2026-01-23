#include <bits/stdc++.h>
using namespace std;
        // 490A team olympiad
int main() {
    int n;
    cin >> n;

    vector<int> one, two, three;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) one.push_back(i);
        else if (x == 2) two.push_back(i);
        else if (x == 3) three.push_back(i);
    }

    int teams = min({one.size(), two.size(), three.size()});
    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }

    return 0;
}
