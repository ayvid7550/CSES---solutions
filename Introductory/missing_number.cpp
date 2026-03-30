#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
        ll n;
        cin>>n;
        ll sum = n*(n+1)/2;
        ll sum1 = 0;
        for(int i = 0; i < n-1; i++){
            ll x;
            cin>>x;
            sum1+=x;
        }
        ll result = sum - sum1;
        cout<<result<<"\n";
    return 0;
}