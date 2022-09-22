#include <bits/stdc++.h>
#define pbk push_back
#define p_q priority_queue
using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;

int N, K;

struct Song {
    string title;
    char genre;
    int B;
    double S;
    int D;

    Song(string& str, char _genre, int _B, double _S, int _D) {
        title = str;
        genre = _genre;
        B = _B;
        S = _S;
        D = _D;
    }
};
struct cmp {
    bool operator() (const Song& a, const Song& b) {
        if(a.B != b.B) return a.B < b.B;
        if(a.D != b.D) return a.D < b.D;
        return a.S > b.S;
    }
};

p_q<Song, vector<Song>, cmp> pq;

void Input() {
    cin >> N >> K;

    while(N--) {
        string str;
        char genre;
        int B, D;
        double S;
        cin >> str >> genre >> B >> S >> D;
        pq.push(Song(str, genre, B, S, D));
    }
}

string ans;
void Process() {
    queue<Song> q;

    int idx=1;


    if(K==idx) {
        ans = pq.top().title;
        return;
    }
    
    Song before = pq.top();
    pq.pop();

    while(!pq.empty()) {
        auto now = pq.top();
        pq.pop();

        if(before.genre == now.genre) {
            q.push(now);
            continue;
        }
        else {
            idx++;
            if(K==idx) {
                ans = now.title;
                return;
            }
            before = now;
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}

void Output() {
    cout << ans;
}

int main() {
    Input();
    Process();
    Output();
}