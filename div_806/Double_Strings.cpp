//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <iterator>

#define endl '\n'

using namespace std;

vector<string> strs;
unordered_set<string> us;
vector<bool> ans;

void input() {
    us.clear();

    int n;
    cin >> n;

    ans.resize(n);
    fill(ans.begin(), ans.end(), false);

    strs.resize(n);
    for (auto &str: strs) {
        cin >> str;
        us.emplace(str);
    }
}

void solve() {
    auto it = strs.begin();
    while (it != strs.end()) {
        string &str = *it;

        for (int i = 0; i < str.size(); ++i) {
            auto s1 = str.substr(0, i);
            auto s2 = str.substr(i, 9);

            if (us.find(s1) != us.end() && us.find(s2) != us.end()) {
                ans[it - strs.begin()] = true;
                break;
            }
        }

        ++it;
    }
}

void output() {
    ostream_iterator<bool> os(cout, "");
    copy(ans.begin(), ans.end(), os);
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        input();
        solve();
        output();
    }
}
