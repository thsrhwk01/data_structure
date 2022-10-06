#include <iostream>
#include <queue>
#include <vector>
#define endl '\n'
#define pb(k) push_back(k)
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
 
        queue<int> pw;
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int input; cin >> input;
            pw.push(input);
        }
 
        for(int i = 0; i < n; i++)
        {
            auto p = pw.front();
            int len;
            string ud;
            cin >> len >> ud;
            for(int j = 0; j < ud.size(); j++)
            {
                if(ud[j] == 'D')
                    p++;
                else if(ud[j] == 'U')
                    p--;
                if(p > 9)
                    p  = 0;
                if(p < 0)
                    p = 9;
            }
            ans.pb(p);
            pw.pop();
        }
        for(auto a : ans)
            cout << a << " ";
        cout << endl;
    }
 
 
    return 0;
}