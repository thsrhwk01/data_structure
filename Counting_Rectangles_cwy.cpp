//
// Created by woo-young Choi on 2022/09/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rect_n, query;
vector<vector<long long>> sum(1001, vector<long long>(1001));

void input() {
    cin >> rect_n >> query;
    for (auto &x: sum) fill(x.begin(), x.end(), 0);

    int h, w;
    while (rect_n--) {
        cin >> h >> w;
        sum[h][w] += h * w;
    }
}

void solve() {
    for (int i = 1; i < 1001; ++i)
        for (int j = 1; j < 1001; ++j)
            sum[i][j] = sum[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];

    int lh, lw, hh, hw;
    long long ans;
    while (query--) {
        cin >> lh >> lw >> hh >> hw;
        ans = sum[hh - 1][hw - 1] - sum[hh - 1][lw] - sum[lh][hw - 1] + sum[lh][lw];

        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        input();
        solve();
    }
}
