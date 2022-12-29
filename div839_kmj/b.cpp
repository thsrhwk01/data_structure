#include <bits/stdc++.h>
#define endl '\n'
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v)    v.begin(), v.end()
#define rall(v)   v.rbegin(),v.rend()
#define pb        push_back
#define sz(a)     (int)a.size()
#define pii       pair<int, int>
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;
 
using namespace std;
 
void spin_num(vector<int> &spin)
{
	int tmp1 = spin[0];
	spin[0] = spin[2];
	int tmp2 = spin[1];
	spin[1] = tmp1;
	tmp1 = spin[3];
	spin[3] = tmp2;
	spin[2] = tmp1;
}
 
bool is_beautiful(vector<int> &spin)
{
	return spin[0] < spin[1] && spin[2] < spin[3] && spin[0] < spin[2] && spin[1] < spin[3];
}
 
void solve()
{
	vector<int> spin;
	int cnt = 0;
 
	forn(i, 2)
		forn(j, 2)
		{
			int input; cin >> input;
			spin.pb(input);
		}
 
	while(cnt < 4)
	{
		if(is_beautiful(spin))
		{
			cout << "YES" << endl;
			return;
		}
		else
		{
			spin_num(spin);
			cnt++;
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