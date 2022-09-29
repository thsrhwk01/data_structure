#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    for(int i = 2; i <= 26; i++)
    {
        long long a, b;
        cout << "? " << "1 " << i << endl;
        cin >> a;
        cout << "? " << i << " 1" << endl;
        cin >> b;
 
        if(a != b)
        {
            n = a + b;
            break;
        }
        if(a == -1)
        {
            n = i - 1;
            break;
        }
    }
 
    cout << "! " << n << endl;
 
    return 0;
}