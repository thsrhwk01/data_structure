#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define pii pair<int, int>
 
typedef long long ll;
 
using namespace std;
 
 
void solve()
{
    vector<int> v;
    map<int, char> mp;
    int n; cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        int input; cin >> input;
        v.pb(input);
    }
 
    string trans;
    cin >> trans;
    for(int i = 0; i < v.size(); i++)
    {
        if(mp.count(v[i]) == 0)
        {
            mp[v[i]] = trans[i];
        }
        else
        {
            if(mp[v[i]] != trans[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
 
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
 
    return 0;
}