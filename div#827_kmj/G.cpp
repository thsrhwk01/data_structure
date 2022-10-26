#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#define endl '\n'
#define pb push_back
#define whole(v) v.begin(),v.end()
#define rwhole(v) v.rbegin(),v.rend()
typedef short sh;
typedef char ch;
typedef long long ll;
typedef double db;
typedef long double ld;

using namespace std;

void solve()
{
    vector<pair<int, bool>> a;
    vector<int> b;

    int n; cin >> n;
    int first = 0;
    int first_idx = 0;

    for(int i = 0; i < n; i++)
    {
        int input; cin >> input;
        if(first < input)
        {
            first = input;
            first_idx = i;
        }
        a.pb({input, true});
    }

    int cur_max = first;
    int pv_max = cur_max;
    int max_idx = 0;
    b.pb(first);
    a[first_idx].second = false;

    [&] ()
    {
        while(1)
        {
            for(int i = 0; i < a.size(); i++)
            {
                if(a[i].second == true)
                {
                    if(cur_max < (pv_max | a[i].first))
                    {
                        cur_max = pv_max | a[i].first;
                        max_idx = i;
                    }
                }
            }
            if(pv_max == cur_max)
                return;
            a[max_idx].second = false;
            b.pb(a[max_idx].first);
            pv_max = cur_max;
        }
    } ();

    // Insert the rest
    for(auto w : a)
        if(w.second == true)
            b.pb(w.first);

    for(auto ans : b)
        cout << ans << ' ';
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
