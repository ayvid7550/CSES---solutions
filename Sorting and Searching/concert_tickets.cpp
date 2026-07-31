#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, m;
    cin>>n>>m;
    multiset<int> mul = {};
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        mul.insert(x);
    }

    int arr [m];
    for(int i = 0; i < m; i++) {
        cin>>arr[i];
    }

    for(auto c: arr) {
        if(mul.begin() == mul.end()) {
            cout<<-1<<"\n";
            continue;
        }
        auto p = mul.lower_bound(c);
        if(p == mul.end()) {
            cout<<*prev(p)<<"\n";
            mul.erase(prev(p));
            continue;
        }
        if(*(p) == c ) {
            cout<<c<<"\n";
            mul.erase(p);
            continue;
        }
        if(p == mul.begin() && (*p) > c) {
            cout<<-1<<"\n";
        }
        else{ 
            cout<<(*prev(p))<<"\n";
            mul.erase(prev(p));
        }
    }
    return 0;
}

