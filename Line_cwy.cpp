//
// Created by 99woo on 2022-09-20.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int k;
string s;
vector<long long> ans;

void input() {
    cin >> k >> s;
}

void solve() {
    ans.clear();
    ans.reserve(k);

    long long sum = 0;

    bool back = false;

    auto it = s.begin();

    while (it != s.end()) {
        if (*it == 'L')
            sum += it - s.begin();
        else
            sum += s.end() - it - 1;

        ++it;
    }

    auto it_l = s.begin();
    auto it_r = s.rbegin();

    while (it_r - s.rbegin() < s.size() / 2) {
        if(back) {
            back = false;
            if (*it_r == 'R') {
                sum -= it_r - s.rbegin();
                sum += s.rend() - it_r - 1;
                ans.emplace_back(sum);
            }

            ++it_r;
        }
        else {
            back = true;
            if (*it_l == 'L') {
                sum -= it_l - s.begin();
                sum += s.end() - it_l - 1;
                ans.emplace_back(sum);
            }

            ++it_l;
        }
    }

    if(ans.empty()) ans.emplace_back(sum);
    fill_n(back_inserter(ans), k - ans.size(), *ans.rbegin());
}

void output() {
    ostream_iterator<long long> os(cout, " ");
    copy(ans.begin(), ans.end(), os);
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    while (n--) {
        input();
        solve();
        output();
    }
}