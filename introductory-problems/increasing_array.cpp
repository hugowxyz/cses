#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, c0, c1, ans = 0;
    cin >> n >> c0;
    for (long long i=1; i<n; i++) {
        cin >> c1;
        if ( c0 > c1 ) ans += (c0 - c1);
        c0 = max(c0, c1);
    }
    cout << ans;
    return 0;
}