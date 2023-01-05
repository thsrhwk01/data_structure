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
	int n; cin >> n;
	vi a(n);
 
	for(int i = 0; i < n ; i++)
		cin >> a[i];
 
	int mm = a[0];
	int it = 1;
 
	if(a.size() % 2 == 0)
	{
		it = 0;
		mm = 0;
	}
	while(it < n)
	{
		if(mm <= min(a[it], a[it + 1]))
		{
			mm = max(a[it], a[it + 1]);
			it += 2;
		}
		else
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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