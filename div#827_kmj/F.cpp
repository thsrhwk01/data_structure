#include <iostream>
#include <vector>
#include <algorithm>
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
    ll s_size = 1, t_size = 1;
    // if t str has non a, then s always wins.
    // On the other hands, if s str has non a and t str has all a, then t wins.
    // if both s and t are all a, then compare the size.
    bool othera_s = false, othera_t = false;
    int q; cin >> q;

    for(int i = 0; i < q; i++)
    {
        ll target, count;
        string str;
        cin >> target >> count >> str;
        // if there was non a in t, then always t is lose. so skip the calculate.
        if(!othera_t)
        {
            for(auto nona : str)
            {
                if(nona != 'a')
                {
                    if(target == 1)
                        othera_s = true;
                    if(target == 2)
                        othera_t = true;
                    break;
                }
            }
        }

        if(target == 1)
            s_size += count * str.size();
        else
            t_size += count * str.size();

        if(othera_t)
            cout << "YES\n";
        else
        {
            if(othera_s)
                cout << "NO\n";
            else
            {
                if(s_size >= t_size)
                    cout << "NO\n";
                else
                    cout << "YES\n";
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
