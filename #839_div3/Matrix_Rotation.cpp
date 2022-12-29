//
// Created by 99woo on 2022-12-29.
//

#include <bits/stdc++.h>

using namespace std;

using pii = pair<int, int>;
using vii = vector<pii>;
using ll = long long;

#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    int a, b, c, d;
    // a b
    // c d

    cin >> a >> b >> c >> d;

    int k = 4;

    while (k--) {
        if (a < b && a < c && b < d && c < d) {
            cout << "YES" << endl;
            return;
        }

        swap (a, c);
        swap (c, d);
        swap (d, b);
    }

    cout << "NO" << endl;
}

int main() {
    fastio
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}