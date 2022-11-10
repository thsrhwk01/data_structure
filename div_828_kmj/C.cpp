#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pii pair<int, int>
 
typedef long long ll;
 
using namespace std;
 
 
void solve()
{
    vector<int> idx, dist;
    int n; cin >> n;
    char c; cin >> c;
    string repeat;
    cin >> repeat;
 
    for(int i = 0; i < repeat.size(); i++)
    {
        if(repeat[i] == 'g')
            idx.pb(i);
    }
    if(c == 'g')
    {
        cout << '0' << endl;
        return;
    }
 
    for(int i = 0; i < repeat.size(); i++)
    {
        if(repeat[i] == c)
        {
            int d;
            if(i > idx.back())
            {
                d = idx.front() + (repeat.size() - i);
            }
            else
            {
                // 여기서 이분탐색으로 찾으면 좋을 듯 싶다..
                for(auto n : idx)
                {
                    if(n > i)
                    {
                        d = n - i;
                        break;
                    }
                }
            }
            dist.pb(d);
        }
    }
    sort(rall(dist));
 
    cout << dist.front() << endl;
 
 
}
 
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
 
    return 0;
}