#include <bits/stdc++.h>
using namespace std;

bool check(size_t mFront, size_t mSize, size_t mCap, size_t last)
{
    if (mFront >= mCap || last >= mCap || mSize > mCap)
        return false;
    if ((mFront + mSize) % mCap != last)
        return false;
    return true;
}

int main()
{
    size_t Q, mFront, mSize, mCap, last, cor;
    cin >> Q;
    while (Q--)
    {
        cin >> mFront >> mSize >> mCap >> last >> cor;
        cout << ">>>>>  ";
        if (check(mFront, mSize, mCap, last))
        {
            cout << "OK ";
        }
        else
        {
            cout << "WRONG ";
        }
        if (cor == 0)
        {
            cout << "\n";
            continue;
        }
        switch (cor)
        {
        case 1:
            cout << (last - mSize + mCap) % mCap << "\n";
            break;
        case 2:
            cout << last + (last < mFront ? mCap : 0) - mFront << "\n";
            break;
        case 3:
            cout << max(last + 1, max(mSize, mFront + 1)) << "\n";
            break;
        case 4:
            cout << (mSize == mCap ? 0 : (mFront + mSize) % mCap) << "\n";
            break;
        default:
            break;
        }
    }
}