#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int felv_time, telv_time;
        felv_time = a - 1;
        telv_time = abs(c - b) + c - 1;
 
        if(felv_time == telv_time)
            cout << "3\n";
        else if(felv_time > telv_time)
            cout << "2\n";
        else
            cout << "1\n";
    }
    return 0;
}