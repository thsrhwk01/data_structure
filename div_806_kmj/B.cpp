#include <iostream>
#include <map>
#define endl '\n'
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        map<char, int> mp;
        int score, n;
        string str;
        cin >> n >> str;
 
        score = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(mp.count(str[i]) == 0)
            {
                score += 2;
                mp[str[i]] = 1;
            }
            else
                score++;
        }
        cout << score << endl;
    }
 
 
    return 0;
}