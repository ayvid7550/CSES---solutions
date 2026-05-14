#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve(vector<ll> &v, vector <ll> &store, ll sum1=0, int ind=0) {
    if(ind == v.size()){
        store.push_back(sum1);
        return;
    }
    sum1+=v[ind];
    solve(v, store, sum1, ind+1);
    sum1-=v[ind];
    solve(v, store, sum1, ind+1);
}

int main() {
    fast;
    int n;
    cin>>n;
    ll sum = 0;
    vector <ll> v;
    vector <ll> store;
    for(int i = 0; i < n; i++) {
        ll x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    solve(v, store);
    for(auto &i:store) {
        i = abs(sum - 2*i);
    }
    sort(store.begin(), store.end());
    cout<<abs(store[0]);
    return 0;
}   