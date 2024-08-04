#include <iostream>
#include <climits>

using namespace std;

// Number of vertices in the graph
#define V 4

// A function to print the solution matrix
void printSolution(int dist[][V]) {
    cout << "The shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
}

// The main function that finds the shortest distances between every pair of vertices
void floydWarshall(int graph[][V]) {
    int dist[V][V];

    // Initialize the solution matrix same as the input graph matrix
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Add all vertices one by one to the set of intermediate vertices
    // Before the start of an iteration, we have shortest distances between all pairs of vertices such that
    // the shortest distances consider only the vertices in the set {0, 1, 2, .. k-1} as intermediate vertices
    for (int k = 0; k < V; k++) {
        // Pick all vertices as source one by one
        for (int i = 0; i < V; i++) {
            // Pick all vertices as destination for the above picked source
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j, then update the value of dist[i][j]
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix
    printSolution(dist);
}

int main() {
    // Example graph represented using adjacency matrix
    int graph[V][V] = {{0, 5, INT_MAX, 10},
                       {INT_MAX, 0, 3, INT_MAX},
                       {INT_MAX, INT_MAX, 0, 1},
                       {INT_MAX, INT_MAX, INT_MAX, 0}};

    // Call the floydWarshall function to find the shortest distances between every pair of vertices
    floydWarshall(graph);
    return 0;
}
