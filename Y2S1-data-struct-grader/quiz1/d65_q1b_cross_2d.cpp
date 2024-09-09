#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m, int r1, int r2, int c1, int c2)
{
    // your code here
    vector<vector<int>> mm;
    mm.resize(m.size() - (r2 - r1 + 1));

    int ii = 0, jj = 0;
    for (int i = 0; i < m.size(); i++)
    {
        // cout << i << " : ";
        if (i >= r1 && i <= r2)
        {
            continue;
        }
        mm[ii].resize(m[0].size() - (c2 - c1 + 1));
        for (int j = 0; j < m[0].size(); j++)
        {
            // cout << j << " ";
            if (j >= c1 && j <= c2)
            {
                continue;
            }
            mm[ii][jj] = m[i][j];
            jj++;
        }
        ii++;
        jj = 0;
        // cout << "\n";
    }
    m = mm;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> m;
    int r, c, r1, r2, c1, c2;
    cin >> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i = 0; i < r; i++)
    {
        m[i].resize(c);
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    cross_2d(m, r1, r2, c1, c2);
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}