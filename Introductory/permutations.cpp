#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) {
        int n;
        cin>>n;
        for(int i = n; i > 0; i--){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}