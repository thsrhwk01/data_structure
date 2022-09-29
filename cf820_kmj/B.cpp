#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<char> decoded;
        string incoded;
        int size_code;
 
        cin >> size_code;
        cin >> incoded;
        int i = size_code - 1;
        while(i >= 0)
        {
            int num;
            if(incoded[i] == '0')
            {
                num = (incoded[i - 2] - '0') * 10 + incoded[i - 1] - '0';
                i -= 3;
            }
            else
            {
                num = incoded[i] - '0';
                i--;
            }
            decoded.push_back('a' + num - 1);
        }
        for(int i = decoded.size() - 1; i >= 0; i--)
            cout << decoded[i];
        cout << '\n';
    }
 
    return 0;
}