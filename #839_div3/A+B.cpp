//
// Created by 99woo on 2022-12-29.
//

#include <bits/stdc++.h>

using namespace std;

using pii = pair<int, int>;
using vii = vector<pii>;
using ll = long long;

#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void input() {
    int a, b;
    char c;

    cin >> a >> c >> b;

    cout << a + b << endl;
}
int main() {
    fastio
    int n;
    cin >> n;

    while (n--) {
        input();
    }
}