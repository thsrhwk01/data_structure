#include <iostream>
#include <algorithm>
 
using namespace std;
 
void Colourblindness()
{
    char colour[2][100];
    int column;
    cin >> column;
 
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < column; j++)
        {
            cin >> colour[i][j];
            if(colour[i][j] == 'B')
                colour[i][j] = 'G';
        }
    
    for(int i = 0; i < column; i++)
        if(colour[0][i] != colour[1][i])
        {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}
 
int main()
{
    int test_case;
    cin >> test_case;
    while(test_case-- > 0)
        Colourblindness();
 
    return 0;
}