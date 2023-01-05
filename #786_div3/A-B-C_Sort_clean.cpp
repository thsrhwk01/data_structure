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

vector<int> a;

void input() {
    a.clear();
    int n;

    cin >> n;
    a.resize(n);

    for (int i = 1; i <= n; ++i)  cin >> a[n - i]; // ���� ����


    if ((n & 1) == 1) a.push_back(0);
}

void solve() {
    for (int i = 0; i < a.size() - 2; i += 2) {
        int bef = min(a[i], a[i + 1]), aft = max(a[i + 2], a[i + 3]);

        if (bef < aft) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}


int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
    }
}