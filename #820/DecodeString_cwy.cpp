//
// Created by woo-young Choi on 2022/09/28.
//

#include <iostream>
#include <algorithm>

using namespace std;

string result;
size_t sz;
string encoded;

void input() {
    result.clear();
    cin >> sz;
    cin >> encoded;
}

void solve() {
    auto it1 = encoded.begin();
    string tmp = "";
    while (*it1 != '\0') {
        auto it2 = it1 + 2;
        if (it2 < encoded.end() && *it2 == '0') {
            if ((it2 + 1) < encoded.end() && *(it2 + 1) == '0') {
                tmp += *it1;
                ++it1;
            }
            else {
                tmp += *it1;
                tmp += *(it1 + 1);
                it1 += 3;
            }
        }
        else {
            tmp += *it1;
            ++it1;
        }

        char c = stoi(tmp) + 96;
        result += c;
        tmp.clear();
    }

}

void output() {
    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        input();
        solve();
        output();
    }
}
