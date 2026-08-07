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
    sort(v.begin(), v.end());
    ll sum = 0;
    for(auto c : v) {
        sum+= abs(v[n/2] - c);
    }
    cout<<sum;
    return 0;
}