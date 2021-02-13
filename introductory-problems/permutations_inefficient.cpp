#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if ( n == 1 ) {
        cout << 1;
        return 0;
    } else if ( (n == 2) | (n == 3) ) {
        cout << "NO SOLUTION";
        return 0;
    }
    
    vector<int> base = {2, 4, 1, 3};
    for ( int i=5; i<=n; i++ ) {
        for ( unsigned int j = 0; j<base.size(); j++ ) { 
            if ( j == 0 ) {
                if ( abs(i - base[j]) > 1 ) {
                    base.insert(base.begin(), i);
                    break;
                }
            } else if ( j != base.size()-1) {
                if ( abs(i - base[j-1]) > 1 && abs(i - base[j]) > 1) {
                    base.insert(base.begin() + j, i);
                    break;
                }
            }
        }
    }
    
    for ( auto i : base )
        cout << i << " ";

    return 0;
}