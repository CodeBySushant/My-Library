/* Q3> 3.	From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra's algorithm. */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX; // Infinite distance

// Function to find the vertex with the minimum distance from the set of vertices not yet processed
int minDistance(const vector<int>& dist, const vector<bool>& visited, int V) {
    int min = INF, min_index = -1;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v], min_index = v;
        }
    }

    return min_index;
}

// Dijkstra's algorithm implementation
void dijkstra(const vector<vector<int>>& graph, int src, int V) {
    vector<int> dist(V, INF);      // dist[i] will hold the shortest distance from src to i
    vector<bool> visited(V, false); // visited[i] will be true if vertex i is included in shortest path tree

    dist[src] = 0; // Distance from source to itself is always 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited, V);

        if (u == -1) break; // No more reachable vertices

        visited[u] = true;

        // Update dist[v] only if:
        // 1. There is an edge from u to v
        // 2. v is not visited
        // 3. Total weight of path from src to v through u is smaller than current dist[v]
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the constructed distance array
    cout << "\nVertex \t Distance from Source (" << src << ")\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF)
            cout << i << "\t Unreachable\n";
        else
            cout << i << "\t " << dist[i] << "\n";
    }
}

int main() {
    int V;
    cout << "Enter the number of vertices in the graph: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V, 0));

    cout << "Enter the adjacency matrix (0 if no edge):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int src;
    cout << "Enter the source vertex (0 to " << V - 1 << "): ";
    cin >> src;

    dijkstra(graph, src, V);

    return 0;
}

//Time complexity: O(v^2)