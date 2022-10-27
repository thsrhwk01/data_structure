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

int n;
vector<int> vec;
unordered_set<int> cache, second_cache;

int i, j, ans;

int gcd(int n1, int n2) {
    if (n2 == 0) return n1;
    return gcd(n2, n1 % n2);
}

void input() {
    cache.clear();
    vec.clear();
    cin >> n;
    vec.resize(n);

    for (auto &x: vec) {
        cin >> x;
    }
}

void solve() {
    ans = 0;
    i = n - 1;

    while (i >= 0) {
        if (ans > 2 * i) break;
        int nowi = vec[i];

        if (cache.find(nowi) != cache.end()) {
            --i;
            continue;
        }
        else {
            cache.emplace(nowi);
        }

        j = i;

        second_cache.clear();
        while (j >= 0) {
            if (i + j < ans) break;
            int nowj = vec[j];

            if (second_cache.find(nowj) != second_cache.end()) {
                --j;
                continue;
            }
            else second_cache.emplace(nowj);

            if (gcd(max(nowi, nowj), min(nowi, nowj)) == 1) {
                ans = i + j;
                break;
            }
            --j;
        }

        --i;
    }
}

void output() {
    if (ans == 0) cout << -1 << endl;
    else cout << ans + 2 << endl;
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
