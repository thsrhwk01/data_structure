//
// Created by 99woo on 2022-11-09.
//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define em emplace
#define emb emplace_back
#define range(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int ans;

void input() {
    ans = 0;

    int n, first_g = -1;
    char sym;
    cin >> n >> sym;

    if (sym == 'g') {
        string trash;
        cin >> trash;
        ans = 0;
        return;
    }

    int where = -1;
    char c;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (first_g == -1 && c == 'g') first_g = i;
        if (where == -1 && c == sym) {
            where = i;
        } else if (where != -1 && c == 'g') {
            ans = max(ans, i - where);
            where = -1;
        }
    }

    if (where != -1) ans = max(ans, n - where + first_g);
}

void output() {
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        input();
        output();
    }
}