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
 
void solve()
{
	vector<int> arr;
	int Ctic = 1;
	int k, n; cin >> k >> n;
 
	for(int i = 0; i < k; i++)
		arr.pb(i + 1);
	
	bool exceed = false;
	int differentiate = 1;
	while(1)
	{
		int plus = differentiate;
		for(int i = k - 1; i > k - 1 - differentiate; i--)
		{
			if(arr[i] + plus <= n)
			{
				arr[i] += plus;
				plus--;
			}
			else
			{
				exceed = true;
				break;
			}
		}
		if(exceed) break;
 
		differentiate++;		
	}
	
	for(auto k : arr)
		cout << k << ' ';
	cout << endl;
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