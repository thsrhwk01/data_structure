#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define pb push_back
#define whole(v) v.begin(),v.end()
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;

using namespace std;

void solve()
{
    // highest, stair height in ith idx
    vector<ll> hist, stair;
    vector<ll> legs, ans;
    ll cur_height = 0;
    int n, q; cin >> n >> q;

    ll pinput; cin >> pinput;
    hist.pb(pinput);
    cur_height += pinput;
    stair.pb(cur_height);

    for(int i = 1; i < n; i++)
    { 
        ll input; cin >> input;
        cur_height += input;
        stair.pb(cur_height);
        hist.pb(max(hist.back(), input));
    }

    for(int i = 0; i < q; i++)
    {
        ll input; cin >> input;
        legs.pb(input);
    }

    for(auto l : legs)
    {
        int idx = upper_bound(whole(hist), l) - hist.begin() - 1;
        ans.pb(idx);
    }


    for(auto i : ans)
    {
        if(i == -1)
            cout << "0 ";
        else
            cout << stair[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
