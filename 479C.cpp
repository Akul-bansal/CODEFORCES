#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<long long,long long>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end()); // sort by a[i]

    long long last_day = 0;

    for(int i = 0; i < n; i++){
        if(a[i].second >= last_day){
            last_day = a[i].second;
        } else {
            last_day = a[i].first;
        }
    }

    cout << last_day;
}
