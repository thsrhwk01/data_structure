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
 
ll mypow(ll a, ll b)
{
	ll r = 1;
	while(b--)
		r *= a;
	return r;
}
 
void solve()
{
	ll ans;
	string s, t;
	cin >> s >> t;
	if(t.find('a') == string::npos)
		ans = mypow(2, s.size());
	else
		if(t.size() == 1)
			ans = 1;
		else
			ans = -1;
	
	cout << ans << endl;
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