//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'

using namespace std;

vector<int> vec;
vector<int> sum;
int n;
long long ans;

void input() {
    cin >> n;

    vec.clear();
    sum.resize(n + 1);
    sum[0] = 0;
    int tmp;
    for (int i = 1; i <= n; ++i) {
        cin >> tmp;
        if (i > tmp) {
            vec.emplace_back(tmp);
            sum[i] = sum[i - 1] + 1;
        } else {
            sum[i] = sum[i - 1];
        }
    }
}

void solve() {
    ans = 0;
    for (auto &num: vec) {
        if(num > n)
            ans += sum.at(n);
        else if(num == 0) continue;
        else
            ans += sum.at(num - 1);
    }
}

void output() {
    cout << ans << endl;
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
