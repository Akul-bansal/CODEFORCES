#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    int maximum = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maximum = max(maximum, count);
    }
    cout << maximum << endl;

    return 0;
}
