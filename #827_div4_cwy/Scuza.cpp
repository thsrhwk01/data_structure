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

vector<int> quests;
map<int, ll> mp;
int n, q;

void input() {
    mp.clear();
    cin >> n >> q;
    quests.resize(q);

    int max_height = 1, tmp;
    while (n-- ) {
        cin >> tmp;
        if (max_height < tmp) {
            mp[tmp] = mp[max_height];
            max_height = tmp;
        }

        mp[max_height] += tmp;
    }

    for (auto &y: quests) {
        cin >> y;
    }
}

void output() {
    for (const auto &question: quests) {
        auto where = mp.upper_bound(question);
        if (where == mp.begin()) cout << 0;
        else cout << prev(where)->second;
        cout << ' ';
    }
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
