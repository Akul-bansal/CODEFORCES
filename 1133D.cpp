#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
    // 1133D Zero quantity maximization 
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];
    long long b[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    map<pair<long long,long long>, int> freq;
    int zero_zero = 0;
    int maxcount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) {
            if (b[i] == 0)
                zero_zero++;
            continue;
        }

        long long p = -b[i];
        long long q = arr[i];

        long long g = __gcd(abs(p), abs(q));
        p /= g;
        q /= g;

        if (q < 0) {
            p = -p;
            q = -q;
        }

        freq[{p, q}]++;
        maxcount = max(maxcount, freq[{p, q}]);
    }

    cout << maxcount + zero_zero << endl;
    return 0;
}
