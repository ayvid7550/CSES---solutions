#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll n, m;
    cin>>n;
    m = n;
    if(n < 5 && n != 1 && n != 4){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    else if(n == 1){
        cout<<1<<endl;
    }
    else if(n == 4){
        cout<<"2 4 1 3"<<endl;
    }
    else{
    while(m > 0){
        cout<<m<<" ";
        m-=2;
    }
    m = n-1;
    while(m > 0){
        cout<<m<<" ";
        m-=2;
    }
}

    return 0;
}   