#include <bits/stdc++.h>
using namespace std;

int n, m, ansInsert = 0, ansSearch = 0;
int mark[2000], hashT[2000]; // don't forget to use (x + j*j)%n;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> n >> m;
    while (m--)
    {
        int op, x;
        cin >> op >> x;
        if (op == 1)
        {
            int j = 0;
            // serach for an insert bucket
            while (mark[(x + j * j) % n] == 2)
            {
                // in case of deledted x that already in hash
                if (hashT[(x + j * j) % n] == x)
                    break;
                j++;
            }
            // insert value in hash table
            hashT[(x + j * j) % n] = x;
            mark[(x + j * j) % n] = 2;
        }
        if (op == 2)
        {
            int j = 0;
            // search througn used bucket, stop when it reach mark=0
            while (mark[(x + j * j) % n] != 0)
            {
                // stop when reach value x
                if (hashT[(x + j * j) % n] == x)
                    break;
                j++;
            }
            // case1 : no value b in hash table
            if (hashT[(x + j * j) % n] != x)
                continue;
            // case2 : delete b
            hashT[(x + j * j) % n] = 0;
            mark[(x + j * j) % n] = 1;
        }
    }

    // seach for answer
    for (int i = 0; i < n; i++)
    {
        int j = 0, ct_insert = 1, ct_find = 1;
        bool isFoundWhereToInsert = false;
        while (mark[(i + j * j) % n] != 0)
        {
            if (mark[(i + j * j) % n] == 1)
            {
                isFoundWhereToInsert = true;
            }
            j++;
            ct_find++;
            if (!isFoundWhereToInsert)
                ct_insert++;
        }
        ansInsert = max(ansInsert, ct_insert);
        ansSearch = max(ansSearch, ct_find);
    }

    cout << ansInsert << " " << ansSearch;
}