#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
vector <string> solution(int n){
    if(n == 1){
        return {"0", "1"};
    }

    vector <string> prev = solution(n-1);
    vector <string> result;

    for(auto s: prev){
        result.push_back("0" + s);

    }
    for(int i = prev.size() -1; i >= 0; i--){
        result.push_back("1" + prev[i]);
    }
    return result;
}

int main() {
    fast;
    int n;
    cin>>n;
    for(auto s : solution(n)){
        cout<<s<<"\n";
    }
    return 0;
}