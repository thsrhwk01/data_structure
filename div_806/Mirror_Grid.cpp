//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int n;
vector<vector<int>> vec;

int ans;

int cnt(int i, int j) {
    int cnt = 0;
    if (vec[i][j] != vec[j][n-i]) ++cnt;
    if (vec[i][j] != vec[n - i][n - j]) ++cnt;
    if (vec[i][j] != vec[n- j][i]) ++cnt;

    return min(4 - cnt, cnt);
}

void input() {
    cin >> n;
    vec.resize(n);
    for (auto &v: vec) {
        v.resize(n);
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i) {
            v[i] = s[i] - '0';
        }
    }

    --n;
}

void solve() {
    ans = 0;
    for (int i = 0; i <= n / 2; ++i) {
        for (int j = 0; j <= (n - 1) / 2; ++j) {
            ans += cnt(i, j);
        }
    }
}

void output() {
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
        output();
    }
}
