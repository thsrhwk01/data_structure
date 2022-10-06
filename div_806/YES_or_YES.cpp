//
// Created by woo-young Choi on 2022/10/05.
//

#include <iostream>
#define endl '\n'

using namespace std;

char c;
bool ans;

void input() {
    ans = true;

    cin >> c;
    if (c != 'Y' && c != 'y') {
        ans = false;
    }

    cin >> c;
    if (c != 'E' && c != 'e') {
        ans = false;
    }

    cin >> c;
    if (c != 'S' && c != 's') {
        ans = false;
    }
}

void output() {
    cout << (ans ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        input();
        output();
    }
}
