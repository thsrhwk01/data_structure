//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#define endl '\n'

using namespace std;

int n;
vector<int> vec;
string UAD;

void input() {
    cin >> n;
    vec.resize(n);
    for (auto &num: vec) {
        cin >> num;
    }
}

void solve() {
    for (auto &num: vec) {
        cin >> n;
        cin >> UAD;
        int u = count_if(UAD.begin(), UAD.end(),
                         [] (const auto& c) { return c == 'U'; });
        int d = count_if(UAD.begin(), UAD.end(),
                         [] (const auto& c) { return c == 'D'; });

        int res = d - u;

        num += res;
        num %= 10;
        if (num < 0) num += 10;
    }
}

void output() {
    ostream_iterator<int> os(cout, " ");
    copy(vec.begin(), vec.end(), os);
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
