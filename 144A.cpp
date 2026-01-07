#include <bits/stdc++.h>
using namespace std;
        //144-A 
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxVal = -1, minVal = 101;
    int maxPos = 0, minPos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxPos = i;
        }
        if (a[i] <= minVal) {
            minVal = a[i];
            minPos = i; // last occurrence
        }
    }

    int moves = maxPos + (n - 1 - minPos);
    if (maxPos > minPos)
        moves--;

    cout << moves;
    return 0;
}
