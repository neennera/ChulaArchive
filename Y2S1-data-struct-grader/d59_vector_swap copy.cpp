#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1, vector<int> &v2,
                 int start1, int end1,
                 int start2, int end2)
{
    int s1 = end1 - start1, s2 = end2 - start2;
    for (size_t i = 0; i < max(s1, s2); i++)
    {
        if (i < s1 && i < s2)
        {
            int temp = v1[start1 + i];
            v1[start1 + i] = v2[start2 + i];
            v2[start2 + i] = temp;
        }

        else if (i >= s1)
        {
            int j = s2 - s1;
            while (j != 0)
            {
                v1.insert(v1.begin() + start1 + i, v2[start2 + i]);
                v2.erase(v2.begin() + s2 + i);
                j--;
            }
            break;
        }
        else
        {
            int j = s1 - s2;
            while (j != 0)
            {
                v2.insert(v2.begin() + start2 + i, v1[start1 + i]);
                v1.erase(v1.begin() + s1 + i);
                j--;
            }
            break;
        }
    }
}
int main()
{
    // read input
    int n, c;
    vector<int> v1, v2;
    cin >> n; // number of v1
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; // number of v2
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v2.push_back(c);
    }
    int s1, e1, s2, e2; // position
    cin >> s1 >> e1 >> s2 >> e2;
    // call the function
    vector_swap(v1, v2, s1, e1, s2, e2);
    // display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    // display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}