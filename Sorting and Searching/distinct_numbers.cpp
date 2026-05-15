#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n;
    cin>>n;
    ll arr [n];
    ll i = 0;
    while(cin) {
        cin>>arr[i];
        i++;
    }
    sort(arr, arr+n);
    ll distinct = 1;
    for(ll j = 0; j < n-1; j++) {
        if(arr[j] != arr[j+1])
            distinct++;
    }
    cout<<distinct;
    return 0;
}