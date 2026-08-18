#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    vector <int> a (2*n);
    for(int i = 0; i < 2*n; i+=2) {
        cin>>a[i]>>a[i+1];
        a[i+1] = -a[i+1];
    }
    sort(a.begin(), a.end(), [](int x, int y) {
        return abs(x) < abs(y);
    });

    int best = 0;
    int current = 0;

    for(auto &c : a) {
        if(c > 0) {
            current++;
        }
        else {
            best = max(current, best);
            current--;
        }
    }
    cout << best;
    return 0;
}