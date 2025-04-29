#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;
int primMST(int V, vector<vector<pair<int, int>>> &adj) {
    vector<int> key(V, INF);        
    vector<bool> inMST(V, false);  
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    key[0] = 0;
    pq.push({0, 0}); 

    int totalCost = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalCost += w;

        for (auto edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({weight, v});
            }
        }
    }
    return totalCost;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<pair<int, int>>> adj(V);

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }

    int mstCost = primMST(V, adj);
    cout << "Total cost of Minimum Spanning Tree: " << mstCost<<endl;
    return 0;
}
