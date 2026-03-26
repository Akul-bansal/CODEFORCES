#include <iostream>
using namespace std;
     //9A
int main() {
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);
    int fav = 6 - mx + 1;

    int g = __gcd(fav, 6);

    cout << fav / g << "/" << 6 / g;

    return 0;
}
