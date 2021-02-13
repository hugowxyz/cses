#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a = 1;
    cin >> n;
    for (int i=0; i < n; i++) {
        a = (a*2)%((long long)1e9+7);
    }
    cout << a;
    return 0;
}