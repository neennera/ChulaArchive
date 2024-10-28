#include <bits/stdc++.h>
using namespace std;

int N, M;
int a, b;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    while (M--)
    {

        cin >> a >> b;
        if (a == b)
        {
            cout << "a and b are the same node\n";
            continue;
        }
        if (a > b)
        {
            bool c = true;
            while (1)
            {
                if (a == b)
                {
                    cout << "b is an ancestor of a\n";
                    c = 0;
                    a = 0;
                    break;
                }
                if (a == 0 || c == 0)
                    break;
                a = (a - 1) / 2;
            }
            if (c)
                cout << "a and b are not related\n";
        }
        else
        {
            bool c = true;
            while (1)
            {
                if (a == b)
                {
                    cout << "a is an ancestor of b\n";
                    c = 0;
                    b = 0;
                    break;
                }
                if (b == 0 || c == 0)
                    break;
                b = (b - 1) / 2;
            }
            if (c)
                cout << "a and b are not related\n";
        }
    }
}