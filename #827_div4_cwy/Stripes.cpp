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

char board[8][8];
char ans;

void input() {
    for (auto &i: board) {
        for (char &j: i) {
            cin >> j;
        }
    }
}

void solve() {
    ans = 'R';
    for (int i = 0; i < 8; ++i) {
        bool isred = true;
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] != 'R') {
                isred = false;
                break;
            }
        }

        if (isred) return;
    }

    ans = 'B';
}

void output() {
    cout << ans << endl;
}

int main() {
    fastio
    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
        output();
    }
}
