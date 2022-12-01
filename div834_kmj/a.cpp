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
 
string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
 
void solve()
{
    string compr; cin >> compr;
    int len = compr.size();
 
    for(int i = 0; i < 3; i++)
    {
        string s_yes(yes.begin() + i, yes.begin() + i + len);
        if(s_yes.compare(compr) == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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