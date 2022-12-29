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

int n, k;

set<int> s;

void input() {
    cin >> k >> n;
    s.clear();
}

void solve() {
    int tmp = 1, i = 1;

    while (tmp <= n && s.size() < k) {
        s.em(tmp);
        tmp += i;

        ++i;
    }

    if (s.size() == k) return;

    tmp = n;

    while (s.size() < k) {
        s.em(tmp);
        --tmp;
    }
}

void output() {
    for (const auto &i: s) {
        cout << i << ' ';
    }

    cout << endl;
}

int main() {
    fastio

    int n;
    cin >> n;

    while (n--) {
        input();
        solve();
        output();
    }
}