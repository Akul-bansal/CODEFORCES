#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int length=s.length();
       if(s[0]!=s[length-1])
       s[0]=s[length-1];
       cout<<s<<endl;
    }
    return 0;
}
