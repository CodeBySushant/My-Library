#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9; 

int multistageGraph(int n, vector<vector<pair<int, int>>> &graph) {
    vector<int> cost(n, INF);
    cost[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        for (auto edge : graph[i]) {
            int nextNode = edge.first;
            int weight = edge.second;
            cost[i] = min(cost[i], weight + cost[nextNode]);
        }
    }
    return cost[0];
}

int main() {
    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<pair<int, int>>> graph(n);

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    int minCost = multistageGraph(n, graph);
    cout << "Minimum cost from source to destination: " << minCost << endl;
    return 0;
}
