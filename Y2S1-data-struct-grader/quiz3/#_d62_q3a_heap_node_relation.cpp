#include <bits/stdc++.h>
using namespace std;

void ck(int a, int b)
{
    if (a == b)
    {
        cout << "a and b are the same node\n";
        return;
    }
    int aa = a, bb = b;
    if (a > b)
    {
        while (true)
        {
            if (aa == b)
            {
                cout << "b is an ancestor of a\n";
                return;
            }
            if (aa == 0)
                break;
            aa = (aa - 1) / 2;
        }
    }
    else
    {
        while (true)
        {
            if (bb == a)
            {
                cout << "a is an ancestor of b\n";
                return;
            }
            if (bb == 0)
                break;
            bb = (bb - 1) / 2;
        }
    }
    cout << "a and b are not related\n";
    return;
}

int a, b, N, K;

int main()
{
    cin >> N >> K;
    while (K--)
    {
        cin >> a >> b;
        ck(a, b);
    }
}