#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num_fs;
        cin >> num_fs;
        vector<int> x, y;
        vector<int> rest_bud;
 
        for(int i = 0; i < num_fs; i++)
        {
            int input;
            cin >> input;
            x.push_back(input);
        }
        for(int i = 0; i < num_fs; i++)
        {
            int input;
            cin >> input;
            y.push_back(input);
        }
 
        for(int i = 0; i < num_fs; i++)
            rest_bud.push_back(y[i] - x[i]);
 
        sort(rest_bud.begin(), rest_bud.end());
 
        int cnt = 0;
        int left = 0, right = rest_bud.size() - 1;
 
        while(left <= right)
        {
            if(rest_bud[left] >= 0 && rest_bud[right] >= 0)
            {
                cnt += (right - left + 1) / 2;
                break;
            }
 
            if(rest_bud[left] + rest_bud[right] >= 0)
            {
                cnt++;
                right--;
            }
            left++;
        }
        cout << cnt << '\n';
 
    }
 
    return 0;
}