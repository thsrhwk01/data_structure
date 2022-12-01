#include <bits/stdc++.h>
#define endl '\n'
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v)    v.begin(), v.end()
#define rall(v)   v.rbegin(),v.rend()
#define pb        push_back
#define sz(a)     (int)a.size()
#define pii       pair<int, int>
#define myinput int input; cin >> input;
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;
 
using namespace std;
 
void solve()
{
    int a[51];
    memset(a, 0, sizeof(a));
 
    int m, s; cin >> m >> s;
 
    int MM = 0, sum_lost = 0;
 
    for(int i = 0; i < m; i++)
    {
        myinput
        a[input]++;
        MM = max(MM, input);
    }
 
    for(int i = 1; i <= MM; i++)
    {
        if(a[i] == 0)
            sum_lost += i;
    }
 
    if(sum_lost > s)
    {
        cout << "NO" << endl;
        return;
    }
    else if(sum_lost == s)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        int plus = MM + 1;
        while(1)
        {
            sum_lost += plus;
            if(sum_lost == s)
            {
                cout << "YES" << endl;
                return;
            }
            else if(sum_lost > s)
            {
                cout << "NO" << endl;
                return;
            }
            plus++;
        }
    }
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