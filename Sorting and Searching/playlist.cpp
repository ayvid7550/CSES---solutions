#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    vector <int> v (n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }  
    set <int> s = {};
    auto p = v.begin();
    auto q = p;
    int prevMax = 0;
    while(p < v.end()) {
        if(s.find((*p)) == s.end()) {
            s.insert((*p));
            p++;
            prevMax = max(prevMax, (int)(p - q));
            continue;
        }
        while((*q) != (*p)) {
            s.erase((*q));
            q++;
        }
        s.erase((*q));
        q++;
    }
    cout<<prevMax;
    return 0;
}