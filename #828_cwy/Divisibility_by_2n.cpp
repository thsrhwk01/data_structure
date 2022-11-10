//
// Created by woo-young Choi on 2022/11/10.
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

int n, twon;
ll mte;
int cnt;
bool isable;

void input() {
    isable = false;
    mte = 1;
    cin >> n;
    twon = n;

    cnt = 0;

    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (isable) continue;
        mte *= tmp;
        while (!(mte & 1)) {
            mte /= 2;
            --twon;
        }

        if (twon <= 0) isable = true;
    }
}

void solve() {
    if (isable) return;

    for (int i = 262144; i != 1; i /= 2) {
        if (i > n) continue;

        int tmp = i;
        int tmpcnt = 0;

        while (!(tmp & 1)) {
            tmp /= 2;
            ++tmpcnt;
        }

        for (int j = i; j <= n; j += i * 2) {
            twon -= tmpcnt;

            ++cnt;
            if (twon <= 0) {
                isable = true;
                return;
            }
        }
    }
}

void output() {
    cout << (isable ? cnt : -1) << endl;
}

int main() {
    fastio

    int test;
    cin >> test;

    while (test--) {
        input();
        solve();
        output();
    }
}
