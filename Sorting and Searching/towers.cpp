#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    vector <int> v (n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    vector <int> towers;
    for(int i = 0; i < n; i++) {
        auto p = upper_bound(towers.begin(), towers.end(), v[i] );
        if(p == towers.end()) {
            towers.push_back((v[i]));
        }
        else {
            (*p) = v[i];
        }
    }
    cout<< towers.size();
    return 0;
}