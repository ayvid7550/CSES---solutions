    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define fast ios::sync_with_stdio(false); cin.tie(NULL);

    int main() {
        fast;
        int n,a;
        cin>>n;
        int ans=1;
        vector<int> temp(n+2,0);
        vector <int> v (n);
        for(int i = 0; i < n; i++) {
            cin>>a;
            if(temp[a+1])
                ans++;
            temp[a]=1;
        }
        cout << ans << endl;
        return 0;
    }