//
// Created by 99woo on 2023-01-05.
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

int x, y, a, b;


void solve() {
    cin >> x >> y;

    if (x > y) {
        cout << "0 0" << endl;
        return;
    }

    int tmp = y / x;
    if (tmp * x != y) {
        cout << "0 0" << endl;
        return;
    }

    cout << 1 << ' ' << tmp << endl;
}

void output() {

}

int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        solve();
        output();
    }
}