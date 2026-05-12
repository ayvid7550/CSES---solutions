#include <bits/stdc++.h>
using namespace std;

void solve(int n, int from, int to, int helper) {
    if(n == 1) {
        cout<< from << " " << to << "\n";
    }
    else {
        solve(n-1, from, helper, to); 
        solve(1, from, to, helper);
        solve(n-1, helper, to, from);
    }
    return;
}

int main() {
    int n;
    cin>>n;
    cout<< (int)pow(2,n) -1 << "\n";
    solve(n, 1, 3, 2);
    return 0;
}