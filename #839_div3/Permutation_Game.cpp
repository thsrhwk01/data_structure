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

int f, s, d, sz;

void input() {
    f = 0;
    s = 0;
    d = 0;

    cin >> sz;
    int tmp = sz, i = 1, j = sz;

    int inp;
    while (tmp--) {
        cin >> inp;

        if (inp != i && inp != j) ++d;
        else {
            if (i != inp) ++f;
            if (j != inp) ++s;
        }

        ++i;
        --j;
    }
}

void output() {
    //cout << f << ' ' << s << ' ' << d << ' ' << endl;
    int mm = min(f, s);
    f -= mm;
    s -= mm;
    //cout << f << ' ' << s << ' ' << d << ' ' << endl;

    if (f == 0) {
        if (s >= d) cout << "First";
        else cout << "Tie";
    } else { // s == 0
        if (f > d) cout << "Second";
        else cout << "Tie";
    }

    cout << endl;
}

int main() {
    fastio

    int n;
    cin >> n;

    while (n--) {
        input();
        output();
    }
}