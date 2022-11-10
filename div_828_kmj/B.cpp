#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define pii pair<int, int>
 
typedef long long ll;
 
using namespace std;
 
 
void solve()
{
    ll n; cin >> n;
    vector<ll> a;
    ll q; cin >> q;
    ll sum = 0;
 
    int odd_cnt = 0, even_cnt = 0;
 
    for(int i = 0; i < n; i++)
    {
        int input; cin >> input;
        if(input % 2 == 0) even_cnt++;
        else odd_cnt++;
        sum += input;
        a.pb(input);
    }
 
    int inst, plus;
    for(int i = 0; i < q; i++)
    {
        cin >> inst >> plus;
        if(inst == 0)
        {
            if(plus % 2 == 0)
            {
                sum += even_cnt * plus;
            }
            else
            {
                sum += even_cnt * plus;
                odd_cnt += even_cnt;
                even_cnt = 0;
            }
 
        }
        else if(inst == 1)
        {
            if(plus % 2 == 0)
            {
                sum += odd_cnt * plus;
            }
            else
            {
                sum += odd_cnt * plus;
                even_cnt += odd_cnt;
                odd_cnt = 0;
            }
        }
        cout << sum << endl;
    }
}
 
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
 
    return 0;
}