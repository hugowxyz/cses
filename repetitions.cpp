#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    char curr = s[0];
    int count = 0, max = 0;
    for (auto i : s) {
        if ( i == curr ) {
            count++;
            if (count > max) max = count;
        } else if ( i != curr ) {
            count = 1;
            curr = i;
        }
    }
    cout << max;
    return 0;
}