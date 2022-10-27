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

set<int> s;
int n;

void input() {
    s.clear();
    cin >> n;

    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        s.em(tmp);
    }
}

void output() {
    if (s.size() == n) cout << "YES";
    else cout << "NO";
    cout << endl;
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
