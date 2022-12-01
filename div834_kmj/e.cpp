#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pii pair<int, int>
#define myinput int input; cin >> input;
#define vi vector<int>
 
typedef long long ll;
 
using namespace std;
 
void solve()
{
    int n, h; cin >> n >> h;
    vi powers;
    for(int i = 0; i < n; i++)
    {
        myinput
        powers.pb(input);
    }
    sort(all(powers));
 
    char pattern[3][3] = { {'b', 'g', 'g'},
                           {'g', 'b', 'g'},
                           {'g', 'g', 'b'} };
    int Mn = 0;
    for(int i = 0; i < 3; i++)
    {
        int useidx = 0;
        int h_power = h;
        int idx = 0;
        while(idx != powers.size())
        {
            if(powers[idx] < h_power)
            {
                h_power += powers[idx] / 2;
                idx++;
            }
            else
            {
                if(useidx < 3)
                {
                    if(pattern[i][useidx] == 'b')
                    {
                        h_power *= 3;
                    }
                    else
                    {
                        h_power *= 2;
                    }
                    useidx++;
                }
                else
                    break;
            }
        }
        Mn = max(Mn, idx);
    }
    cout << Mn << endl;
}
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}