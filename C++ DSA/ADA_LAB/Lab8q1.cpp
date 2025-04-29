#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    vector<vector<int>> graph = {
        {0, 1, 2, 0, 0, 0}, 
        {0, 0, 0, 3, 4, 0}, 
        {0, 0, 0, 0, 0, 6}, 
        {0, 0, 0, 0, 0, 1}, 
        {0, 0, 0, 0, 0, 2}, 
        {0, 0, 0, 0, 0, 0}   
    };

    int n = graph.size(); 
    vector<int> cost(n, INT_MAX); 
    vector<int> path(n, -1);      

    cost[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] != 0 && cost[j] != INT_MAX) {
                int newCost = graph[i][j] + cost[j];
                if (newCost < cost[i]) {
                    cost[i] = newCost;
                    path[i] = j;
                }
            }
        }
    }

    cout << "Minimum cost from source to destination: " << cost[0] << endl;
    cout << "Path: ";
    int node = 0;
    while (node != -1) {
        cout << node;
        node = path[node];
        if (node != -1)
            cout << " -> ";
    }
    cout << endl;

    return 0;
}
