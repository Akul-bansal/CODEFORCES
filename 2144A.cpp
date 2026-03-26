#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
    //2144A
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int num=0;
        int t=1000;
        for(int i=0;i<s.size();i++){
        num+=(s[i]-'0')*t;
        t=t/10;   
        }
        int st=sqrt(num);
        if(st*st==num && st!=0){
            cout << "1 "<<st-1<<endl;
        }
        else if(st==0)
            cout << "0 0\n";
        else
            cout << "-1\n";
    }
    return 0;
}
