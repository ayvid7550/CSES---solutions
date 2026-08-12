#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int breaks = 0;

    for (int i = 1; i < n; i++) {
        if (pos[i] > pos[i + 1])
            breaks++;
    }

    auto bad = [&](int x) -> int {
        if (x < 1 || x >= n)
            return 0;
        return pos[x] > pos[x + 1];
    };

    while (m--) {
        int x, y;
        cin >> x >> y;

        int vx = a[x];
        int vy = a[y];

        set<int> affected = {
            vx - 1, vx,
            vy - 1, vy
        };

        for (int v : affected)
            breaks -= bad(v);

        swap(a[x], a[y]);

        swap(pos[vx], pos[vy]);

        for (int v : affected)
            breaks += bad(v);

        cout << breaks + 1 << '\n';
    }

    return 0;
}