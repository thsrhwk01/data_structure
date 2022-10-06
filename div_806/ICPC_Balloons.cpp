//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#include <array>
#define endl '\n'

using namespace std;

array<bool, 26> checker;
string str;
int ans;

void input() {
    int trash;
    cin >> trash;
    cin >> str;
}

 void solve() {
    ans = 0;
    checker.fill(false);
    for (const auto &c: str) {
        if (!checker[c - 'A']) {
            checker[c - 'A'] = true;
            ++ans;
        }
        ++ans;
    }
}

void output() {
    cout << ans << endl;
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
        output();
    }
}
