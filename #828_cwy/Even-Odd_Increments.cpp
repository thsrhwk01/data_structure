//
// Created by 99woo on 2022-11-09.
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

int n, q, on, en;
ll ans;

void input() {
    cin >> n >> q;
    ans = 0;
    on = 0;
    en = 0;
    int tmp;

    while (n--) {
        cin >> tmp;
        ans += tmp;

        if (tmp & 1) ++on;
        else ++en;
    }

    bool oper; // 0 false 1 true

    while (q--) {
        cin >> oper >> tmp;

        if (oper) {
            ans += tmp * on;

            if (tmp & 1) {
                en += on;
                on = 0;
            }
        }
        else {
            ans += tmp * en;

            if (tmp & 1) {
                on += en;
                en = 0;
            }
        }

        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        input();
    }
}