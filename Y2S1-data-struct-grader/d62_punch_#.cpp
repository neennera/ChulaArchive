#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k)
{
    // write some code here
    // don’t forget to return something

    int ct = 0;
    while (it != v.end() && ct <= k)
    {
        v.erase(it);
        ct++;
    }
    ct = 0;
    it--;
    while (it != v.begin() - 1 && ct < k)
    {
        v.erase(it);
        it--;
        ct++;
    }
    return v;
}
int main()
{
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result)
    {
        cout << x << endl;
    }
}