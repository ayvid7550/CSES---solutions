#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) {
        ll x,y, bigger, result, smaller;
        cin>>y>>x;
        bigger = max(x,y);
        smaller = min(x,y);
        if(bigger == smaller){
            result = x*x - x + 1;
        }
        else if((bigger % 2 != 0 && bigger == x) || (bigger % 2 == 0 && bigger == y )){
            result = bigger*bigger - smaller + 1;
        }
        else if((bigger % 2 != 0 && bigger == y) || (bigger % 2 == 0 && bigger == x )){
            result = bigger*bigger - 2*bigger +smaller + 1;
        }

        cout<<result<<"\n";
    }
    return 0;
}