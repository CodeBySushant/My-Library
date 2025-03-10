/* Q3> 3.	Write a program to find the Single Source Shortest Path (SSSP) in a Directed Acyclic Graph (DAG) using Dijkstra's Algorithm*/

#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 999999; // Instead of INT_MAX

void dijkstra(int graph[MAX][MAX], int V, int src) {
    int dist[MAX];     // dist[i] holds the shortest distance from src to i
    bool visited[MAX]; // visited[i] is true if vertex i has been processed

    // Initialize distances
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    dist[src] = 0; // Distance to source is 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of unvisited vertices
        int minDist = INF, u = -1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && dist[v] <= minDist) {
                minDist = dist[v];
                u = v;
            }
        }

        if (u == -1) {
            break; // Remaining vertices are not connected
        }

        visited[u] = true;

        // Update dist[v] for all adjacent vertices of u
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the distance array
    cout << "Vertex\tDistance from Source " << src << endl;
    for (int i = 0; i < V; i++) {
        cout << i << "\t" << dist[i] << endl;
    }
}

int main() {
    int V;
    cout << "Enter the number of vertices in the graph: ";
    cin >> V;

    int graph[MAX][MAX];

    cout << "Enter the adjacency matrix (0 if no edge):" << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    dijkstra(graph, V, src);

    return 0;
}
