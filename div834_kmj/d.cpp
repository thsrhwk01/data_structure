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
    ll n, m;
    cin >> n >> m;
 
    int cnt_div2 = 0, cnt_div5 = 0;
    ll copyn = n;
    while(copyn % 2 == 0)
    {
        copyn /= 2;
        cnt_div2++;
    }
    copyn = n;
    while(copyn % 5 == 0)
    {
        copyn /= 5;
        cnt_div5++;
    }
 
    ll multiplier = 1;
    if(n != 1 && cnt_div2 == cnt_div5)
    {
        while(multiplier <= m)
            multiplier *= 10;
        multiplier /= 10;
    }
    else if(cnt_div2 > cnt_div5)
    {
        cnt_div2 -= cnt_div5;
        for(int i = 0; i < cnt_div2; i++)
            multiplier *= 5;
 
        while(multiplier > m)
            multiplier /= 5;
        while(multiplier <= m)
            multiplier *= 10;
        multiplier /= 10;
    }
    else
    {
        cnt_div5 -= cnt_div2;
        for(int i = 0; i < cnt_div5; i++)
            multiplier *= 2;
 
        while(multiplier > m)
            multiplier /= 2;
        while(multiplier <= m)
            multiplier *= 10;
        multiplier /= 10;
 
    }
 
    ll ref = multiplier;
 
    for(int i = 2; 1; i++)
    {
        if(ref * i <= m)
            multiplier = ref * i;
        else
            break;
    }
    cout << n * multiplier << endl;
}
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}