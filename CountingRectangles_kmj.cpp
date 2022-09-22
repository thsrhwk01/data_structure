#include <iostream>
#include <algorithm>
 
using namespace std;
 
long long prefix[1002][1002];
long long area[1002][1002];
 
void countingRectangles()
{
    int n_rec;
    int n_qur;
    cin >> n_rec >> n_qur;
 
    for(int i = 0; i <= 1001; i++)
        for(int j = 0; j <= 1001; j++)
        {
            area[i][j] = prefix[i][j] = 0;
        }
 
    while(n_rec-- > 0)
    {
        long long h, w;
        cin >> h >> w;
        area[h][w] += h * w;
    }
 
    for(int i = 1; i <= 1000; i++)
        for(int j = 1; j <= 1000; j++)
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + area[i][j];
    
    while(n_qur-- > 0)
    {
        long long hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;
 
        cout << prefix[hb - 1][wb - 1] - prefix[hb - 1][ws] - prefix[hs][wb - 1] + prefix[hs][ws] << '\n';
    }
 
}
 
int main()
{
    int test_case;
    cin >> test_case;
    while(test_case-- > 0)
        countingRectangles();
    return 0;
}