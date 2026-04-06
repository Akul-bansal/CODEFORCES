#include<bits/stdc++.h>
using namespace std;
     // 2121A
int main() {
int t;
cin >> t;
while (t--) {
int n, s;
cin >> n >> s;
vector<int> x(n);
for (int i = 0; i < n; i++)
cin >> x[i];
int ans = min(abs(s - x[0]), abs(s - x.back())) + x.back() - x[0];
cout<<ans<<endl;
}
return 0;
}
