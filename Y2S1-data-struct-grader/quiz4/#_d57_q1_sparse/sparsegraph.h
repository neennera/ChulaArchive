#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>
using namespace std;

class SparseGraph
{
public:
    SparseGraph()
    {
        // Your code here
        n = 3;
        p.resize(3);
    }

    SparseGraph(int n_in)
    {
        // Your code here
        n = n_in;
        p.resize(n_in);
    }

    SparseGraph(const SparseGraph &G)
    {
        // Your code here
        n = G.n;
        p = G.p;
    }

    void AddEdge(int a, int b)
    {
        // Your code here
        p[a].insert(b);
    }

    void RemoveEdge(int a, int b)
    {
        // Your code here
        p[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const
    {
        // Your code here
        return p[a].find(b) != p[a].end();
    }
    SparseGraph Transpose() const
    {
        // Your code here
        SparseGraph t(n);
        for (int i = 0; i < p.size(); i++)
        {

            for (const auto &b : p[i])
            {
                t.AddEdge(b, i);
            }
        }
        return t;
    }

protected:
    // Your code here
    int n;
    vector<set<int>> p;
};
#endif // __SPARSE_GRAPH_H__
