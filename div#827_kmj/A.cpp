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

void solve()
{
    vector<int> v;
    for(int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        v.pb(input);
    }
    sort(v.begin(), v.end());
    if(v[0] + v[1] == v[2])
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