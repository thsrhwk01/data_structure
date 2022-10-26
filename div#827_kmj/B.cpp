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
int cnt;

void solve()
{
    vector<int> v;
    int n;
    cin >> n;

    cnt = 0;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.pb(input);
    }
    sort(v.begin(), v.end(), [](int a, int b) { if(a == b) cnt++; return a < b; });
    if(cnt == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}