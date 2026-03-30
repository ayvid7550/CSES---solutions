#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    string s;
    cin>>s;
    ll i = 0;
    ll size = 1;
    ll max_size = size;
    while(i < s.size()) {
        if(i != s.size() -1 && s[i+1] == s[i]){
            size++;
        }
        else{
            if(size > max_size)
                max_size = size;
            size = 1;
        }
        i++;
    }  
    cout<<max_size<<"\n";
    return 0;
}