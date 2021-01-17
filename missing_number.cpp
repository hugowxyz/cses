#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    long long sum = 0, target = ((long long)n * (n+1))/2;
    for (int i=0; i < n-1; i++) {
        cin >> t;
        sum += t;
    }
    cout << target - sum;
    return 0;
}