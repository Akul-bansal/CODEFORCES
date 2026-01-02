#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        map<char, int> freq;

        for (char c : s)
        {
            freq[c]++;
        }
        
        int repeatCount = 0;
        for (auto it : freq)
        {
            if (it.second % 2 == 1)
                repeatCount++;
        }
        if ((n - k) % 2 == 0)
        {
            if (repeatCount == k)
                cout << "YES\n";
            else if ((repeatCount < k))
            {
                if ((k - repeatCount) % 2 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }

            else
                cout << "NO\n";
        }
        else
        {
            if (repeatCount - 1 == k)
                cout << "YES\n";
            else if ((repeatCount <= k))
            {
                if ((k - repeatCount) % 2 != 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}
