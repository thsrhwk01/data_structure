//
// Created by woo-young Choi on 2022/12/20.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int picture_sz, pattern_sz;

const int MAX = 5000;
const ll filter = 1e+9, fingerprint_num1 = 1923, fingerprint_num2 = 5836;

ll pattern_hash;
ll row_hash[MAX][MAX], result_hash[MAX][MAX];


ll modding(ll which) {
    if (which >= 0) return which % filter;
    else return ((-which / filter + 1) * filter + which) % filter;
}

void RowHashing(const string &S, int line) {
    ll power = 1, hash_value = 0;

    for (int i = 0; i < pattern_sz; i++) {
        hash_value = modding(modding(hash_value * fingerprint_num1) + S[i]);
        if (i != pattern_sz - 1) power = modding(power * fingerprint_num1);
    }
    row_hash[line][0] = hash_value;

    for (int i = 1; i <= S.length() - pattern_sz; i++) {
        hash_value = modding(fingerprint_num1 * modding(hash_value - S[i - 1] * power) + S[i + pattern_sz - 1]);
        row_hash[line][i] = hash_value;
    }
}

void ColHashing() {
    for (int i = 0; i <= picture_sz - pattern_sz; i++) {
        ll hash_value = 0, power = 1;

        for (int t = 0; t < pattern_sz; t++) {
            hash_value = modding(modding(hash_value * fingerprint_num2) + row_hash[t][i]);
            if (t != pattern_sz - 1) power = modding(power * fingerprint_num2);
        }
        result_hash[0][i] = hash_value;

        for (int j = 1; j <= picture_sz - pattern_sz; j++) {
            hash_value = modding(fingerprint_num2 * modding(hash_value - row_hash[j - 1][i] * power) + row_hash[j + pattern_sz - 1][i]);
            result_hash[j][i] = hash_value;
        }
    }
}

void solve() {
    string temp;

    //ifstream cin("024.inp");

    cin >> pattern_sz;

    for (int i = 0; i < pattern_sz; i++) {
        cin >> temp;
        RowHashing(temp, i);
    }

    picture_sz = pattern_sz;
    ColHashing();

    pattern_hash = result_hash[0][0];

    //cin.close();

    ifstream read_map("map.txt");

    read_map >> picture_sz;

    for (int i = 0; i < picture_sz; i++) {
        read_map >> temp;
        RowHashing(temp, i);
    }
    ColHashing();

    read_map.close();
}

void output() {
    bool is_printed = false;

    for (int i = 0; i <= picture_sz - pattern_sz; i++)
        for (int j = 0; j <= picture_sz - pattern_sz; j++)
            if (result_hash[i][j] == pattern_hash) {
                cout << j + 1 << ' ' << i + 1 << endl;
                is_printed = true;
            }

    if (!is_printed) cout << "0 0";
}

int main() {
    fastio

    solve();
    output();
}
