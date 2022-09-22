//
// Created by woo-young Choi on 2022/09/19.
//

#include <iostream>
#include <queue>
#include <map>

#define TEST

#ifdef TEST
#include <fstream>
#include <cassert>
#endif

using namespace std;

int genre_num[5] = {0, 1, 2, 3, 4};

map<char, int> condition = {
        {'D', 0},
        {'H', 1},
        {'B', 2},
        {'T', 3},
        {'P', 4}
};

class music {
    string title;
    int broad, down;
    double size;

public:
    music(string title, int broad, double size, int down)
            : title(std::move(title)), broad(broad), size(size), down(down) {};

    bool operator<(const music &rhs) const {
        if (broad == rhs.broad) {
            if (down == rhs.down) return size > rhs.size;
            return down < rhs.down;
        }
        return broad < rhs.broad;
    }

    void print() const {
        cout << title;
    }
}; // 음악 객체 끝

priority_queue<music> pq[5];

int question;

void input() {
#ifdef TEST
    fstream cin ("005.inp");
    assert(cin.is_open());
#endif

    int n;
    cin >> n >> question;

    string title;
    char genre;
    int broad, down;
    double size;

    while (n--) {
        cin >> title >> genre >> broad >> size >> down;

        pq[condition[genre]].emplace(title, broad, size, down);
    }

#ifdef TEST
    cin.close();
#endif
} // input() 끝

void solve() {
    int latest = -1, popular = latest;

    while (question--) {
        for (int genre: genre_num) {
            if (genre != latest &&
                !pq[genre].empty() &&
                (popular == latest || pq[popular].top() < pq[genre].top()))
                popular = genre;
        }

        if (question != 0) {
            pq[popular].pop();
            latest = popular;
        } else pq[popular].top().print();
    }
} // solve() 끝


int main() {
    input();
    solve();
}