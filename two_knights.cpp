#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    for ( long long i=1; i <= k; i++ ) {
        long long a = i * i * (i * i - 1) / 2; // k^2 choose 2
        long long b = 4 * (i - 1) * (i - 2); // Ways of placing 2x3 and 3x2 rects, order does matter
        cout << a - b << "\n";

    }
    return 0;
}