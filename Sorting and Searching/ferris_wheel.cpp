#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n, x;
    cin>>n>>x;
    ll arr [n];
    for(ll i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n); 
    auto high = arr + n - 1;
    auto low = arr;
    ll gondola = 0;
    while(low <= high) {
        if((*low) + (*high) <=x) {
            gondola++;
            low++;
            high--;
        }
        else {
            gondola++;
            high--;
        }
    }
    cout<<gondola;

    return 0;
}