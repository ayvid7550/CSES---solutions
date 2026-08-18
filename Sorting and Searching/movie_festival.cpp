#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int n;
    cin>>n;
    vector <pair<int, int>> v (n);
    for(int i = 0; i < n; i++) {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y){
        return x.second < y.second;
    });

    int result = 0;
    int last_time = 0;
    for(int i = 0; i < n; i++) {
        if(v[i].first >= last_time) {
            result++;
            last_time = v[i].second;
        }
    }

    cout<<result;
}