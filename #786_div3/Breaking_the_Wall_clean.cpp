//
// Created by 99woo on 2023-01-05.
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

vector<int> walls;

int x, y, z;

void input() {
    walls.clear();
    int n;
    cin >> n;

    walls.resize(n);

    for (auto &i: walls) cin >> i;
}

void solve() {
    // x ����
    int fir = 1000001, sec = 1000001;
    for (int wall: walls) {
        if (wall < fir) {
            sec = fir;
            fir = wall;
        } else if (wall < sec) sec = wall;
    }

    x = fir / 2 + (fir & 1) + sec / 2 + (sec & 1);

    // y ����
    y = 1'234'567'890;
    for (int i = 0; i < walls.size() - 1; ++i) {
        int j, k, tmp = 0;
        j = min(walls[i], walls[i + 1]);
        k = max(walls[i], walls[i + 1]);

        if (k >= j * 2) {
            tmp += k / 2 + (k & 1);
            y = min(tmp, y);
        }

        else {
            tmp = (j + k) / 3;
            if ((j + k) % 3 > 0) ++tmp;

            y = min(tmp, y);
        }
    }

    // z ����
    z = 1'234'567'890;
    for (int i = 0; i < walls.size() - 2; ++i) {
        int j, k, tmp = 0;
        j = min(walls[i], walls[i + 2]);
        k = max(walls[i], walls[i + 2]);

        if (k - j >= 2) {
            k -= j;
            tmp = j + (k / 2) + (k & 1);
            z = min(z, tmp);
        }
        else z = min(z, max(walls[i], walls[i + 2]));
    }
}

void output() {
    cout << min(x, min(y ,z));
}

int main() {
    fastio

    input();
    solve();
    output();
}