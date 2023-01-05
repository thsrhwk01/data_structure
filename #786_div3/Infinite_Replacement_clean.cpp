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

string s, t;

void input() {
    cin >> s >> t;
}

void output() {
    if (t.size() > 1 && find(all(t), 'a') != t.end()) {
        cout << -1 << endl;
        return;
    }

    if (t.size() == 1 && t.front() == 'a') {
        cout << 1 << endl;
        return;
    }

    ll x = 1;
    for (int i = 0; i < s.size(); ++i) {
        x *= 2;
    }

    cout << x << endl;
}

int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        input();
        output();
    }
}