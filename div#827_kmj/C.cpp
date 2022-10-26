#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define pb(k) push_back(k)
#define pbd(k, n) push_back({k, n})
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;

using namespace std;
char ans;
void solve()
{
    string R = "RRRRRRRR";
    string B = "BBBBBBBB";
    vector<string> s;

    for(int i = 0; i < 8; i++)
    {
        string input;
        cin >> input;
        s.pb(input);
    }

    // 횡 방향 비교
    for(auto w : s)
    {
        if(w.compare(R) == 0)
        {
            ans = 'R';
            return;
        }
    }

    // 종 방향 비교
    for(int i = 0; i < 8; i++)
    {
        string ns = "";
        for(int j = 0; j < 8; j++)
            ns += s[j][i];

        if(ns.compare(B) == 0)
        {
            ans = 'B';
            break;
        }
    }

}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
        cout << ans << endl;
    }
    return 0;
}