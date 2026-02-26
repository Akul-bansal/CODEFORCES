#include <iostream>
#include <set>
using namespace std;
    //228A 
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout << 4 - s.size();

    return 0;
}
