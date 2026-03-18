#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        int k;
        cin>>n>>k;
        int arr[k];
        if(k>n)
        cout << "NO" << endl;
        
        else
        {
            if(n%2==0)
            {
                if((n-2*(k-1))%2==0 && (n-2*(k-1))>0){
                    cout << "YES" << endl;
                    for(int i=0;i<k-1;i++)
                    cout << "2 ";
                    cout << n-2*(k-1) << endl;
                }
                else if((n-(k-1))%2==1 && (n-(k-1))>0){
                    cout << "YES" << endl;
                    for(int i=0;i<k-1;i++)
                    cout << "1 ";
                    cout << n-(k-1) << endl;
                }
                else
                cout << "NO" << endl;

  }
            else
            {
                if(k%2==1){
                cout << "YES" << endl;
                for(int i=0;i<k-1;i++)
                cout << "1 ";
                cout << n-(k-1) << endl;
            }else
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
