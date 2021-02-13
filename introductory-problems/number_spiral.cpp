#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cout << "\n";
    while (t--) {
        long long x, y, z;
        cin >> y >> x; 
        z = max(x, y);  

        if ( z % 2 == 0 )
            cout << z*z - (x-1) - (z-y) << "\n";
        else 
            cout <<  z*z - (z-x) - (y-1) << "\n";
    }
    return 0;
}