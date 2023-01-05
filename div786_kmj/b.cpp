#include <bits/stdc++.h>
#define endl '\n'
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v)    v.begin(), v.end()
#define rall(v)   v.rbegin(),v.rend()
#define pb        push_back
#define sz(a)     (int)a.size()
#define pii       pair<int, int>
#define vi		  vector<int>
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;
 
using namespace std;
 
void solve()
{
	string letter; cin >> letter;
	int st = letter.front() -= 'a';
	int nd = letter.back() -= 'a' - 1;
	if(st < nd)
		nd -= 1;
	cout << 25 * st + nd << endl;
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
