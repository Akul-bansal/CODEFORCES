#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, m;
        cin >> m >> n;
        string str, str1;
        cin >> str;
        cin >> str1;
        int count = 0, length = m;
        while (length < n)
        {
            length *= 2;
            count++;
        }
        bool sat;
        string strnew = str;
        for (int i = 0; i < count; i++)
            strnew += strnew;

        if (strnew.find(str1) != string::npos)
            cout << count << endl;
        else
        {
            while (length * n <= 800)
            {
                length *= 2;
                count++;
                strnew += strnew;
                if (strnew.find(str1) != string::npos)
                {
                    sat = true;
                    break;
                }
                else
                    sat = false;
            }
            if (sat == true)
                cout << count << endl;
            else
                cout << "-1\n";
        }
    }

    return 0;
}
