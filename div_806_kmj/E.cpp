#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#define endl '\n'
#define pb(k) push_back(k)
#define pbd(k, n) push_back({k, n})
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        bool isExist;
        map<string, int> mp;
        vector<string> s;
        string ans = "";
        cin >> n;
 
        for(int i = 0; i < n; i++)
        {
            string input;
            cin >> input;
            s.pb(input);
            mp.insert({input, 1});
        }
 
        for(int i = 0; i < n; i++)
        {
            isExist = false;
            for(int j = 1; j < s[i].size(); j++)
            {
                string left = s[i].substr(0, j);
                string right = s[i].substr(j, s[i].size() - j);
 
                if(mp.find(left) != mp.end())
                    if(mp.find(right) != mp.end())
                        isExist = true;
            }
            if(isExist)
                ans += "1";
            else    
                ans += "0";
        }
 
        cout << ans << endl;
    }
 
    return 0;
}