#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = 0, count2 = 0, count3 = 0;
        int max1 = 0, max2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == '<' && s[i + 1] == '<'))
                count1++;
            else
            {
                if (max1 < count1)
                {
                    max1 = count1;
                    count1 = 0;
                }
                else
                    count1 = 0;
            }
        }
        if (max1 < count1)
            max1 = count1;

        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == '>' && s[i + 1] == '>'))
                count2++;
            else
            {
                if (max2 < count2)
                {
                    max2 = count2;
                    count2 = 0;
                }
                else
                    count2 = 0;
            }
        }
        if (max2 < count2)
            max2 = count2;

        int max3 = max(max1, max2);
        cout << max3 + 2 << endl;
    }
    return 0;
}
