#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, f = 5, c = 0;
    cin >> n;
    while (1) {
        c += (long long)n / f;
        f *= 5;
        if ( f > n ) {
            cout << c;
            break;
        }
    }
    return 0;
}