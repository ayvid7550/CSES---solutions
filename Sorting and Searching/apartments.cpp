#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> v1;
    vector<ll> v2;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    for(ll i = 0; i < m; i++) {
        ll x;
        cin>>x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll result = 0;
    auto last_found = v2.begin();
    for(ll i = 0; i < n; i++) {
        auto it = lower_bound(last_found, v2.end(), v1[i]- k);
        if(it == v2.end()){
            break;
        }
        if(*it <= v1[i] + k) {
            result++;
            last_found = it+1;
        }
    }
    cout<<result;
    return 0;
}