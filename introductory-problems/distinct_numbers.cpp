#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;
    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        s.insert(a);
    }
    cout << s.size();
    return 0;
}