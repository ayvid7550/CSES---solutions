#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n, x;
    cin>>n>>x;
    vector <pair<int, int>> v (n);
    for(int i = 0; i < n; i++) {
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    auto l = v.begin();
    auto r = v.end() -1;
    while(l<r) {
        if(((*l).first + (*r).first) < x) {
            l++;
        }
        else if(((*l).first + (*r).first) > x) {
            r--;
        }
        else{
            cout<<l->second<<" "<<r->second;
            return 0;
        }
    }

cout<<"IMPOSSIBLE";


    return 0;
}