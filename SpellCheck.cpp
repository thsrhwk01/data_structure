//
// Created by 99woo on 2022-09-20.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;


void solve() {
    cin >> n;
    int tmp;
    string s;
    vector<bool> correct(5);

    while (n--) {
        fill_n(correct.begin(), 5, false);
        cin >> tmp >> s;

        if (tmp != 5) {
            cout << "NO\n";
            continue;
        }

        for (const auto& ch : s) {
            switch (ch) {
                case 'T':
                    correct[0] = true;
                    break;
                case 'i':
                    correct[1] = true;
                    break;
                case 'm':
                    correct[2] = true;
                    break;
                case 'u':
                    correct[3] = true;
                    break;
                case 'r':
                    correct[4] = true;
                    break;
            }
        }

        if (all_of(correct.begin(), correct.end(), [] (auto x) {return x == true;})) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}