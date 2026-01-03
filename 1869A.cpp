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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            int x = arr[0];
            for (int i = 1; i < n; i++)
            {
                x = x ^ arr[i];
            }
            if (x == 0)
            {
                cout << "1\n"
                     << "1 " << n << "\n";
            }
            else
            {
                cout << "2\n"
                     << "1 " << n << "\n";
                cout << "1 " << n << "\n";
            }
        }
        else
        {
            cout << "4\n";
            cout << "1 " << n - 1 << "\n";
            cout << "1 " << n - 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n - 1 << " " << n << "\n";
        }
    }
    return 0;
}
