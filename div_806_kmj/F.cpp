#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define pb(k) push_back(k)
#define pbd(k, n) push_back({k, n})
typedef long long ll;
typedef double db;

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        // index, value
        cin >> n;
        vector<pair<ll, ll>> a;

        for(ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            if(input < i + 1)
                a.pbd(i + 1, input);
        }

        sort(a.begin(), a.end(), [] (pair<int, ll> a, pair<int, ll> b)
        { if(a.second == b.second) return a.first < b.first; return a.second < b.second;});

        // for(auto w : a)
        //     cout << w.first << ' ' << w.second << endl;

        for(ll i = 0; i < a.size(); i++)
        {
            ll left = 0, right = a.size() - 1;
            ll mid;

            while(left < right)
            {
                mid = (left + right) / 2;
                if(a[mid].second > a[i].first)
                    right = mid;
                else
                    left = mid + 1;
            }

            // cout << "left is " << left << endl;
            if(a[left].second > a[i].first & left <= a.size() - 1)
                ans += a.size() - left;
        }
        cout << ans << endl;
    }
 
    return 0;
}