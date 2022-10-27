//
// Created by woo-young Choi on 2022/10/25.
//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pii pair<int, int>
#define vii vector<pii>
#define ll long long

#define em emplace
#define emb emplace_back
#define range(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

ll s, t;

void solve() {
    s = 1;
    t = 1;

    int n;
    cin >> n;

    ll x, y;
    string tmp;
    bool t_has_b = false, s_has_b = false;
    while (n--) {
        cin >> x >> y >> tmp;

        if (t_has_b) {
            cout << "YES" << endl;
            continue;
        }

        bool hehe = all_of(range(tmp), [](const auto &c) { return c == 'a'; });
        if (x == 2 && !hehe) {
            t_has_b = true;
            cout << "YES" << endl;
            continue;
        }

        if (s_has_b) {
            cout << "NO" << endl;
            continue;
        }

        if (x == 1 && !hehe) {
            s_has_b = true;
            cout << "NO" << endl;
            continue;
        }

        (x == 1 ? s : t) += y * tmp.size();

        cout << (s < t ? "YES" : "NO") << endl;
    }
}

int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
