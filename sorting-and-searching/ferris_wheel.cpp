#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x, p;
    vector<ll> v;
    cin >> n >> x;
    while (n--) {
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    ll i=0, a=0, jg=v.size()-1;
    while (i<v.size()){
        ll j=jg;
        while (j>=0){
            if(j<=i){a+=v.size()-2*a;i=v.size();break;}
            else if(v[i]+v[j]<=x){a+=1;jg=j-1;break;}
            j--;
        }
        i++;
    }
    cout<<a;
    return 0;
}