#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int a, int b)
{
    // write your code only in this function
    int ct = ((b - a + 1) / 2);
    for (size_t i = 0; i < ct; i++)
    {
        /* code */
        int temp = v[b - i];
        v[b - i] = v[a + i];
        v[a + i] = temp;
    }
}
int main()
{
    // read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    // call function
    reverse(v, a, b);
    // display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}