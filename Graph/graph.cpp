#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *array;

public:
    Graph(int v)
    {
        this->V = v;
        array = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        array[u].push_back(v);
        array[v].push_back(u);
    }

    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " : ";
            for (auto x : array[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.printGraph();
    return 0;
}
