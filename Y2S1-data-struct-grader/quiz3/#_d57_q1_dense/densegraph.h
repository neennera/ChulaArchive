#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>
using namespace std;
class DenseGraph
{
public:
    DenseGraph()
    {
        n = 3;
    }

    DenseGraph(int n_in)
    {
        n = n_in;
    }

    DenseGraph(const DenseGraph &G)
    {
        n = G.n;
        for (int i = 0; i < n; i++)
        {
            g[i] = G.g[i];
        }
    }

    void AddEdge(int a, int b)
    {
        if (g[a].find(b) == g[a].end())
        {
            g[a].insert(b);
        }
    }

    void RemoveEdge(int a, int b)
    {
        if (g[a].find(b) != g[a].end())
        {
            g[a].erase(b);
        }
    }

    bool DoesEdgeExist(int a, int b) const
    {
        if (g[a].find(b) != g[a].end())
        {
            return true;
        }
        return false;
    }

    DenseGraph Transpose() const
    {
        DenseGraph ans(n);
        for (int i = 0; i < n; i++)
        {
            for (auto it = g[i].begin(); it != g[i].end(); it++)
            {
                ans.g[*it].insert(i);
            }
        }
        return ans;
    }

protected:
    int n;
    // Your code here
    set<int> g[1000];
};
#endif // __DENSE_GRAPH_H__
