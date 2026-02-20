#include <iostream>
using namespace std;
      //Repetition 
bool isPrime(int n) {
    if (n <= 1) return false;        
    if (n == 2) return true;         
    if (n % 2 == 0) return false;     
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
       long long int n, m;
        cin >> n >> m;
        
        
    if (isPrime(n) && m==1)
        cout << "YES\n";
        else if(n==1 && m==2)
        cout << "YES\n";
         
    else
        cout << "NO\n";
}
return 0;
}
