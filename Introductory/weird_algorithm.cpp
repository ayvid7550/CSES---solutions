#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
 
int main() {
    fast;
    ll n;
    cin>>n;
    while(n != 1){
        cout<<n<<" ";
        if(n%2 == 0)
            n = n/2;
        else n = 3*n + 1;
    }
    cout<<1;
    return 0;
}
