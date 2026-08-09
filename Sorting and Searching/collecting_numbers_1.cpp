#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    map <int, int> m;
    int pass = 1;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        m[x] = i;
    }
    for(int i = 1; i < n; i++) {
        if(m[i+1] < m[i]) {
            pass++;
        }
    }
    cout<<pass;

    return 0;
}