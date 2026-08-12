#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, m;
    cin>>n>>m;
    int ans = 1;
    vector <int> v (n);
    vector <int> pos (n+1);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        pos[v[i]] = i;
    }
    for(int i = 0; i < n; i++) {
        if(pos[v[i]] < pos[v[i] + 1]) {
            ans++;
        }
        pos[v[i]];
    }

    for(int i = 0; i < m; i++) {
        ans = ans - 2;
        int a , b;
        a--;
        b--;
        cin>>a>>b;
        swap(v[a], v[b]);
        if(pos[v[a] - 1] < pos[v[a]]) {
            ans++;
        }
        if(pos[v[a]] < pos[v[a]+1]) {
            ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}