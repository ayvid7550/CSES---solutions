#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll x; int n;
    cin>>x>>n;
    set <ll> s = {0, x};
    multiset <ll> m = {x};
    
    for(int i = 0; i < n; i++) {
        ll a;
        cin>>a;
        s.insert(a);
        auto it = s.find(a);
        ll left = *prev(it); ll right = *next(it);

        m.erase(m.find(right - left));
        m.insert(a - left);
        m.insert(right - a);

        cout<<*m.rbegin()<<" ";
    }
    return 0;
}