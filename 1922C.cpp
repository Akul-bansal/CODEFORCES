#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> a(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long int> prefix(n+1, 0), suffix(n+1, 0);
        for (int i = 1; i < n; i++)
        {
            if(i==1)
            prefix[i+1]=1;
            else if (abs(a[i-1] - a[i - 2]) > abs(a[i-1] - a[i]))
            {
                prefix[i + 1] = prefix[i] + 1;
            }
            else
            {
                prefix[i + 1] = prefix[i] + abs(a[i-1] - a[i]);
            }
            
        }
       for(int i = n; i > 1; i--)
        {
            if(i==n)
            suffix[i-1]=1;
            else if (abs(a[i-1] - a[i]) > abs(a[i-2] - a[i - 1]))
            {
                suffix[i - 1] = suffix[i] + 1;
            }
            else
            {
                suffix[i - 1] = suffix[i] + abs(a[i-2] - a[i - 1]);
            }
           
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            long long int sum = 0;
            if (x < y)
            {
                sum = prefix[y] - prefix[x];
            }
            else
            {
                sum = suffix[y] - suffix[x];
            }

            cout << sum << endl;
        }
    }
    return 0;
}
