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
	int x, y; cin >> x >> y;
	int a = 0, b = -1;
	bool impos = false;
 
	if(x > y)
		impos = true;
	else if(x == y)
		a = 1, b = 1;
	else
	{
		if(y % x != 0)
			impos = true;
		else
			a = 1, b = y / x;
	}
 
	if(impos)
		cout << "0 0" << endl;
	else
		cout << a << ' ' << b << endl;
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