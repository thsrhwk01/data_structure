//
// Created by 99woo on 2022-12-29.
//
 
#include <bits/stdc++.h>
 
using namespace std;
 
using pii = pair<int, int>;
using vii = vector<pii>;
using ll = long long;
#define int long long
 
#define endl '\n'
#define em emplace
#define emb emplace_back
#define all(x) x.begin(), x.end()
#define fastio iostream::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
 
int MM, mm, k;
 
const int LIMIT = 999'999'999;
vector<long long> vec;
pair<long long, long long> range;
 
bool increasing, able, eq;
 
void input() {
    cin >> k;
    vec.clear();
    vec.resize(k);
 
    able = true;
    eq = false;
 
    cin >> vec[0] >> vec[1];
 
    if (vec[0] == vec[1]) {
        eq = true;
        range.first = 0;
        range.second = LIMIT;
    } else if (vec[0] < vec[1]) {
        increasing = true;
        range.first = 0;
        range.second = (vec[0] + vec[1]) / 2;
    } else {
        increasing = false;
        range.first = (vec[0] + vec[1]) / 2 + (vec[0] & 1 xor vec[1] & 1);
        range.second = LIMIT;
    }
 
    ll tmp;
    for (int i = 2; i < k; ++i) {
        cin >> vec[i];
 
        if (eq) {
            if (vec[i - 1] < vec[i]) {
                increasing = true;
                range.first = 0;
                range.second = (vec[i] + vec[i - 1]) / 2;
                eq = false;
            } else if (vec[i - 1] > vec[i]) {
                increasing = false;
                range.first = (vec[i] + vec[i - 1]) / 2 + (vec[i] & 1 xor vec[i - 1] & 1);
                range.second = LIMIT;
                eq = false;
            }
        } else {
            if (increasing && vec[i - 1] > vec[i]) {
                increasing = false;
                tmp = (vec[i] + vec[i - 1]) / 2 + (vec[i] & 1 xor vec[i - 1] & 1);
                if (range.first <= tmp) range.first = tmp;
                else able = false;
 
                if (range.first > range.second) able = false;
            } else if (!increasing && vec[i - 1] < vec[i]) {
                increasing = true;
                tmp = (vec[i] + vec[i - 1]) / 2;
                if (range.second >= tmp) range.second = tmp;
                else able = false;
 
                if (range.first > range.second) able = false;
            }
        }
 
    }
}
 
void output() {
    if (able) cout << range.first;
    else cout << -1;
 
    cout << endl;
}
 
signed main() {
    fastio
 
    int n;
    cin >> n;
 
    while (n--) {
        input();
        output();
    }
}
