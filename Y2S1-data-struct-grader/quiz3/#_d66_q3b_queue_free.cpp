#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    long long size = 0, cap = 1;
    cin >> Q;
    while (Q--)
    {
        long long op, k;
        cin >> op >> k;
        if (!op)
        {
            while (size + k > cap)
            {
                cap = cap * 2;
            }
            size += k;
        }
        else
        {
            size -= k;
        }
    }
    cout << cap - size;
}