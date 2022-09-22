//
// Created by 99woo on 2022-09-20.
//

#include <iostream>
#include <unordered_set>

using namespace std;

void solve() {
    int n; cin >> n;

    while (n--) {
        unordered_set<string> p1, p2, p3;
        int x, s1 = 0, s2 = 0, s3 = 0;
        cin >> x;

        string tmp;
        for (int i = 0; i < x; ++i) {
            cin >> tmp;
            p1.emplace(tmp);
        }

        for (int i = 0; i < x; ++i) {
            cin >> tmp;
            p2.emplace(tmp);
        }

        for (int i = 0; i < x; ++i) {
            cin >> tmp;
            p3.emplace(tmp);
        }

        for (const auto& str: p1) {
            if (p2.find(str) == p2.end() && p3.find(str) == p3.end()) s1 += 3;
            else if (p2.find(str) != p2.end() && p3.find(str) != p3.end()) continue;
            else s1 += 1;
        }

        for (const auto& str: p2) {
            if (p1.find(str) == p1.end() && p3.find(str) == p3.end()) s2 += 3;
            else if (p1.find(str) != p1.end() && p3.find(str) != p3.end()) continue;
            else s2 += 1;
        }

        for (const auto& str: p3) {
            if (p2.find(str) == p2.end() && p1.find(str) == p1.end()) s3 += 3;
            else if (p2.find(str) != p2.end() && p1.find(str) != p1.end()) continue;
            else s3 += 1;
        }

        cout << s1 << ' ' << s2 << ' ' << s3 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}