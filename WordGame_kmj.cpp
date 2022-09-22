#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void WordGame()
{
    int score[3] = {0, 0, 0};
    vector<string> humans[3];
    map<string, int> cnt_name;
    string name;
    int num_words;
 
    cin >> num_words;
 
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < num_words; j++)
        {
            cin >> name;
            humans[i].push_back(name);
            if(cnt_name.count(name) == 0)
                cnt_name.insert({name, 1});
            else
                cnt_name[name]++;
        }
 
    for(int i = 0; i < 3; i++)
    {
        for(auto names : humans[i])
        {
            if(cnt_name[names] == 1)
                score[i] += 3;
            else if(cnt_name[names] == 2)
                score[i]++;
        }
    }
    
    for(int i = 0; i < 3; i++)
        cout << score[i] << ' ';
    cout << '\n';
}
 
int main()
{
    int test_case;
    cin >> test_case;
    while(test_case-- > 0)
    {
        WordGame();
    }
 
    return 0;
}