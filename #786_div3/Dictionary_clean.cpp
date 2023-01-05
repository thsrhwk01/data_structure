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

char a, b;

map<string, int> mp1;

void input() {
    cin >> a >> b;
}

void solve() {

}

void output() {
    cout << mp1[to_string(a) + to_string(b)] << endl;
}

int main() {
    fastio

    int i = 1;
    for (char c = 'a'; c <= 'z'; ++c) {
        for (char d = 'a'; d <= 'z'; ++d) {
            if (c == d) continue;

            string str = to_string(c) + to_string(d);


            mp1[str] = i++;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
        output();
    }
}