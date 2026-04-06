#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n;
    cin>>n;
    ll a = 1;
    ll result = 0;
    while(n/(pow(5, a)) > 0){
        result += (n/(pow(5,a)));
        ++a;
    }
    cout<<result<<"\n";
    return 0;
}