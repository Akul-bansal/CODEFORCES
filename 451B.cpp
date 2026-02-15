#include <iostream>
#include <vector>
#include <algorithm>
   // 451B Sort the array
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        b[i] = arr[i];
    }

    sort(b.begin(), b.end());

    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n1 1\n";
        return 0;
    }

    int l = 0, r = n - 1;

    while (l < n && arr[l] == b[l]) l++;

    while (r >= 0 && arr[r] == b[r]) r--;

    reverse(arr.begin() + l, arr.begin() + r + 1);

    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n" << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no\n";
    }

    return 0;
}
