#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;
    cin >> n;
    if ((n*(n+1)/2) % 2 != 0) {
        cout << "NO";
        return 0;
    }
    t = n*(n+1)/4;
    unordered_set<long long> v0, v1;
    for (long long i=n; i>0; i--) {
        if ( t >= i ) {
            t -= i;
            v0.insert(i);
        } else {
            v1.insert(i);
        }
    }
    cout << "YES\n";
    cout << v0.size() << "\n";
    for ( auto i : v0 ) 
        cout << i << " ";
    cout << "\n" << v1.size() << "\n";
    for ( auto i : v1 ) 
        cout << i << " ";
    
    return 0;
}