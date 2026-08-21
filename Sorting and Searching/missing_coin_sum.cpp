#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n; cin>>n;
    vector <ll> v (n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ll sum = 0;

    for(auto &c : v) {
        if(sum + 1 < c) {
            cout<<sum+1<<"\n";
            return 0;
        }
        else {
            sum+= c;
        }
    }
    cout<<sum+1<<"\n";
    return 0;
}