//
// Created by 99woo on 2022-11-09.
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

map<int, char> mp;
vector<int> vec;
int n;
bool check = true;
string s;

void input() {
    mp.clear();
    cin >> n;
    vec.resize(n);

    for (auto &i: vec) {
        cin >> i;
    }

    cin >> s;
}

void solve() {
    char c;
    int now;

    if (s.size() != vec.size()) {
        check = false;
        return;
    }

    for (int i = 0; i < n; ++i) {
        now = vec[i];
        c = s[i];

        if (mp.find(now) == mp.end())
            mp[now] = c;
        else if (mp[now] != c) {
            check = false;
            return;
        }
    }

    check = true;
}

void output() {
    cout << (check ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        input();
        solve();
        output();
    }
}