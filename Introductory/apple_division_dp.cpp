#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    vector <ll> v;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }   

    sort(v.begin(), v.end());
    ll s = 0;
    for(auto it : v){
        s+= it;
    }

    vector <bool> dp (s+1, false);
    dp[0] = true;
    for(auto p: v){
        for(ll i = s; i >=p; i--){
            if(dp[i-p] == true){
                dp[i] = true;
            }
        }
    }

    ll x = 0;
    for(ll i = s/2; i>=0; i--){
        if(dp[i] == true){
            x = i;
            break;
        }
    }

    cout<<s - 2*x;
    return 0;
}   