#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n; cin >> n; 
    vector<ll> arr(n); 
    for (int i = 0; i < n;i++) cin >> arr[i];
    ll curr = 0; 
    ll best = INT_MIN; 
    for (int i = 0; i < n; i++){
        curr += arr[i];
        best = max(curr, best);
        if (curr < 0) curr = 0;
    }
    cout << best << endl;
    return 0;
}