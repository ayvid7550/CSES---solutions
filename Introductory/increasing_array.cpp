#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n;
    cin>>n;
    vector <ll> vec;
    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    ll min = 0;
    for(ll i = 0; i < vec.size() - 1; i++){
        if(vec.at(i+1) < vec.at(i)){
            min+= vec[i] - vec[i+1];
            vec[i+1] = vec[i];
        }
        else continue;
    }
    cout<<min<<"\n";

    return 0;
}