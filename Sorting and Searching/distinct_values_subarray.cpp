#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<int,int> m;
    int left = 0;
    ll output = 0;

    for (int right = 0; right < n; right++) {
        if (m.count(v[right]) && m[v[right]] >= left) {
            left = m[v[right]] + 1;
        }
        m[v[right]] = right;
        output += (right - left + 1);
    }

    cout << output << endl;
    return 0;
}