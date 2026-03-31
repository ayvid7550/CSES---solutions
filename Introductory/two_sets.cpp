#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n;
    cin>>n;
    if(n % 4 == 1 || n % 4 == 2 ){
        cout<<"NO\n";
        return 0;
    }   
    else{
        cout<<"YES\n";
        if(n % 2 == 0){
            cout<<n/2<<"\n";
            for(ll i = 1; i <= n/4; i++){
                cout<<i<<" "<< n-i+1<<" ";
            }
            cout<<"\n";
            cout<<n/2<<"\n";
            for(ll i = n/4 + 1; i <= 3*n/4; i++){
                cout<<i<<" ";
            }
            cout<<"\n";

        }
        else{
            cout<<n/2 + 1<<"\n";
            cout<<"1 2 ";
            for(ll i = 4; i <=n; i++){
                if(i % 4 == 0 || i % 4 == 3)
                    cout<<i<<" ";
            }
            cout<<"\n"<<n/2<<"\n";
            cout<<3<<" ";
            for(ll i = 5; i <=n; i++){
                if(i % 4 == 1 || i % 4 == 2)
                    cout<<i<<" ";
            }
        cout<<"\n";
        }
    }
    return 0;
}