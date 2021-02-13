#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m, k, a, b, ans = 0;
    cin >> n >> m >> k;
    vector<long long> v0, v1;
    long long n0 = n, m0 = m;
    while (n0--) {
        cin >> a;
        v0.push_back(a);
    }
    while (m0--) {
        cin >> b;
        v1.push_back(b);
    }

    sort(v0.begin(), v0.end());
    sort(v1.begin(), v1.end());

    a = b = 0;
    while ( a < n && b < m ) {
        if ( abs(v0[a] - v1[b]) <= k ) { ans++; a++; b++; } 
        else if ( v0[a] < v1[b] ) a++;
        else b++;
    }
    cout << ans;
    return 0;
}