#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    string s;
    cin>>s;
    map <char, int> m;
    for(auto it: s){
        m[it]++;
    }
    ll len = s.size();
    ll odd = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if((it->second) % 2 != 0)
            odd++;
    }
    if(len % 2 == 0 && odd > 0){
        cout<<"NO SOLUTION\n";
        return 0;;
    }
    else if(len % 2 != 0 && odd > 1){
        cout<<"NO SOLUTION\n";
        return 0;;
    }
    else{
        if(len % 2 == 0){
            string s1;
            for(auto it:m){
                    s1+= string((it.second)/2, it.first);
            }
            string s2 = s1;
            reverse(s1.begin(), s1.end());
            cout<<s2<<s1<<"\n";
        }
        else{
            string s1;
            char a = ' ';
            for(auto it:m){
                if((it.second)% 2 == 1){
                    a = it.first;
                }
                    s1+= string((it.second)/2, it.first);
            }
            string s2 = s1;
            reverse(s1.begin(), s1.end());
            cout<<s2<<a<<s1<<"\n";
        }
    }
    
    return 0;
}