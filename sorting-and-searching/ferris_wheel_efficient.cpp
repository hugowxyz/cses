#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int i=0, j=n-1, r=0;
    sort(v.begin(), v.end());
    for(auto i:v)cout<<i<<" ";cout<<"\n";
    while(i<j){
        if(v[i]+v[j]<=k){r++;i++;j--;}
        else j--;
    }
    cout<<n-r;
    return 0;
}