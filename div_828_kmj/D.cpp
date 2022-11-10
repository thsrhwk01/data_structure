#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pii pair<int, int>
#define myinput int input; cin>> input;
 
typedef long long ll;
 
using namespace std;
 
int sq_two(int num)
{
    int cnt = 0;
    while(num % 2 == 0)
    {
        num /= 2;
        cnt++;
    }
    return cnt;
}
 
void solve()
{
    vector<int> idx;
    int n; cin >> n;
    int hp = n;
    int cnt_ops = 0;
    bool not_exist = false;
 
    for(int i = 0; i < n; i++)
    {
        myinput
        int n_div = sq_two(input);
        hp -= n_div;
        if((i + 1) % 2 == 0)
            idx.pb(sq_two(i + 1));    
    }
    
    if(hp <= 0)
    {
        cout << cnt_ops << endl;
        return;
    }
    else
    {
        sort(rall(idx));
        
        for(auto d : idx)
        {
            if(hp <= 0)
                break;
            cnt_ops++;
            hp -= d;
        }
    }
    if(hp > 0)
        cout << "-1" << endl;
    else
        cout << cnt_ops << endl;
}
 
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
 
    return 0;
}