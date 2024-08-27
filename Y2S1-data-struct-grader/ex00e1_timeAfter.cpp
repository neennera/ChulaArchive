#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int h, m, p;

void getData()
{
    cin >> s;
    h = stoi(s);
    cin >> s;
    m = stoi(s);
    cin >> s;
    p = stoi(s);
}

int main()
{
    getData();
    m += p;
    h += m / 60;
    m %= 60;
    h %= 24;

    cout << (h < 10 ? "0" : "") << h << " " << (m < 10 ? "0" : "") << m;

    return 0;
}