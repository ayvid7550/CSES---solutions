#include <bits/stdc++.h>
using namespace std;

int n = 0;

void permutations(string a, map<char, int> m) {
    if(a.length() == n){
        cout<<a<<"\n";
        return;
    }
    for(char c: "abcdefghijklmnopqrstuvwxyz") {
        if(m[c] > 0) {
            a = a + c;
            m[c]--;
            permutations(a, m);
            a.pop_back();
            m[c]++;
        }
    }
}

long long factorial(long long n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    string s;
    cin>>s;
    n = s.length();
    map<char, int> m;
    for(char c: s) {
        m[c]++;
    }
    long long result = factorial(n);

    for(char c: "abcdefghijklmnopqrstuvwxyz") {
        if(m[c] > 0) {
            result = result / (factorial(m[c]));
        }
    }

    cout<<result<<"\n";

    permutations("", m);

    return 0;
}