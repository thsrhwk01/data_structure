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

ll n, m;
int two, five;

void input() {
    cin >> n >> m;
}

void solve() {
    two = 0;
    five = 0;

    auto tmp = n;

    while (tmp % 5 == 0) {
        tmp /= 5;
        ++five;
    }
    while (tmp % 2 == 0) {
        tmp /= 2;
        ++two;
    }

    ll mm = 1;

    if (two < five) {
        while (mm * 2 <= m && two != five) {
            ++two;
            mm *= 2;
        }
    } else if (five < two) {
        while (mm * 5 <= m && two != five) {
            ++five;
            mm *= 5;
        }
    }

    while (mm * 10 <= m) mm *= 10;

    int cnt = 1;

    while (cnt * mm <= m) {
        ++cnt;
    }

    cout << (cnt - 1) * mm * n;
}

int main() {
    fastio

    int t;
    cin >> t;
    while (t--) {
        input();
        solve();
        cout << endl;
    }
}
