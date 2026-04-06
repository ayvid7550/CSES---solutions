#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n;
    ll mod = 1e9 + 7;
    cin>>n;
    ll power = 1;
    for(ll i = 0; i < n; i++){
        power = (power * 2) % mod;
    }
    cout<<power<<"\n";
    return 0;
}