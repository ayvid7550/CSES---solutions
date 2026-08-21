#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

#define MOD 1000000007

int main() {
    fast;
    ll output = 1;
    int n; cin>> n;
    map <int, int> m;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto &it : m) {
        output= output * (it.second + 1) % MOD;
    }

    ll ans = (output % MOD - 1 + MOD) % MOD; cout << ans;
    return 0;
}