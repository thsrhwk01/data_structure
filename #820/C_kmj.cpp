#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
bool isUpper;
bool compare(pair<int, int> a, pair<int, int> b) 
{ 
    if(isUpper)
        return a.second < b.second; 
    else
        return a.second > b.second;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        isUpper = true;
        // idx and value
        vector<pair<int, int>> between;
        string word;
        cin >> word;
        int small = word[0] >= word[word.size() - 1] ? word[word.size() - 1] : word[0];
        int big = word[0] <= word[word.size() - 1] ? word[word.size() - 1] : word[0];
 
        if(word[0] > word[word.size() - 1])
            isUpper = false;
 
 
        between.push_back({1, word[0]});
        
 
        for(int i = 1; i < word.size() - 1; i++)
            if(small <= word[i] && word[i] <= big)
                between.push_back({i + 1, word[i]});
 
        sort(between.begin() + 1, between.end(), compare);
 
        between.push_back({word.size(), word[word.size() - 1]});
 
        cout << big - small << ' ' << between.size() << '\n';
 
        for(auto w : between)
            cout << w.first << ' ';
        cout << '\n';
    }
 
    return 0;
}