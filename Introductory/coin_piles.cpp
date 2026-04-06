#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) {
        ll a, b;
        cin>>a>>b;
        if((a+b) % 3 == 0 && max(a,b) <= 2*min(a,b)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}   