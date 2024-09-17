#include <bits/stdc++.h>
using namespace std;

int N, i = 1;
int main()
{
    cin >> N;
    while (i < N)
    {
        i *= 2;
    }
    cout << i - N;
}
