//
// Created by 99woo on 2022-09-20.
//

#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int size;
    string s1, s2;
    bool same;
    while (n--) {
        cin >> size >> s1 >> s2;
        same = true;

        auto c1 = s1.begin();
        auto c2 = s2.begin();

        while (c1 != s1.end()) {
            if ((*c1 == 'R' && *c2 != 'R') || (*c2 == 'R' && *c1 != 'R')) {
                same = false;
                break;
            }

            ++c1;
            ++c2;
        }

        if (same) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}