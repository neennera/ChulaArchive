#include <bits/stdc++.h>
using namespace std;

int N, K, V, a;

struct Node
{
public:
    int color;
    int count;
    bool display;
    Node *first;
    Node *last;
    Node *prev;
    Node *next;
    Node(int c)
    {
        display = 1;
        color = c;
        count = 1;
        first = last = this;
        prev = next = nullptr;
    }
};

Node *now = nullptr;
Node *str = nullptr;

void insert(int a)
{
    Node *t = new Node(a);
    if (now == nullptr)
    {
        now = t;
        str = t;
        // cout << "add first one " << a << endl;
        return;
    }
    if (now->color == a)
    {
        t->first = now->first;
        t->count = (now->count) + 1;
        now->first->last = t;
    }
    now->next = t;
    t->prev = now;
    now = t;
    // cout << "added " << a << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> K >> V;
    for (size_t i = 0; i <= N; i++)
    {
        if (i == K)
        {
            insert(V);
            continue;
        }
        cin >> a;
        insert(a);
    }
    Node *t = str;
    while (true)
    {
        if (t->last->count >= 3)
        {
            t->first->display = 0;
            Node *l = t->first, *r = t;
            while (l->first->prev != nullptr && r->last->next != nullptr)
            {
                l = l->first->prev;
                r = r->last->next->last;
                // cout << "r : " << r->color << " " << r->count << ", l: " << l->color << " " << l->count << "\n";
                if (l->color != r->color || (l->count + r->count < 3))
                    break;
                l->first->display = 0;
                r->first->display = 0;
            }
            if (r->last->next == nullptr)
                break;
            t = r->last->next;
        }
        if (t->last->next == nullptr)
            break;
        t = t->last->next;
    }
    // cout << "\n--------\n";
    while (str != nullptr)
    {
        if (str->first->display == 0)
        {
            if (str->last->next == nullptr)
                break;
            str = str->last->next;
            continue;
        }
        cout << str->color << " ";
        if (str->next == nullptr)
            break;
        str = str->next;
    }
}