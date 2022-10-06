#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string yes;
        cin >> yes;
 
        for(int i = 0; i < yes.size(); i++)
            if('a' <= yes[i] && yes[i] <= 'z')
                yes[i] -= 'a' - 'A';
 
        if(yes.compare("YES") == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
 
    return 0;
}