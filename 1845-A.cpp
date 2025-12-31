#include <iostream>
#include <algorithm>           // 1845A - Forbidden Integer
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES\n";
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << "1 ";
            cout << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO\n";
            }
            else if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES\n";
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << "2 ";
                    cout << endl;
                }
                else
                    cout << "NO\n";
            }
            else if (k >= 3)
            {
                if (n % 2 == 0)
                {
                    cout << "YES\n";
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << "2 ";
                    cout << endl;
                }
                else if (n % 3 == 0 && n % 2 != 0)
                {
                    cout << "YES\n";
                    cout << n / 3 << endl;
                    for (int i = 0; i < n / 3; i++)
                        cout << "3 ";
                    cout << endl;
                }
                else if (n % 2 != 0 && n % 3 != 0)
                {
                    int c2 = n / 2 - 1;
                    cout << "YES\n";
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2 - 1; i++)
                        cout << "2 ";
                    cout << "3";
                    cout << endl;
                }
            }
        }
    }

    return 0;
}
