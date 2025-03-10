/* Q2> 2.	Write a program to implement to a minimum cost spanning tree of a graph using Kruskal’s algorithm using heaps*/

#include <iostream>
using namespace std;

const int MAX = 100;      // Maximum number of vertices
const int MAX_EDGES = 1000; // Maximum number of edges
const int INF = 999999;   // Large value instead of INT_MAX

// Structure to represent an edge in the graph
struct Edge {
    int src;
    int dest;
    int weight;
};

// Min-Heap for edges based on their weights
class MinHeap {
public:
    Edge heap[MAX_EDGES];
    int size;

    MinHeap() {
        size = 0;
    }

    void insert(Edge e) {
        heap[size] = e;
        int idx = size;
        size++;

        // Heapify up
        while (idx != 0 && heap[parent(idx)].weight > heap[idx].weight) {
            swap(idx, parent(idx));
            idx = parent(idx);
        }
    }

    Edge extractMin() {
        Edge root = heap[0];
        heap[0] = heap[size - 1];
        size--;

        heapify(0);

        return root;
    }

    bool isEmpty() {
        return size == 0;
    }

private:
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
    int parent(int i) { return (i - 1) / 2; }

    void swap(int i, int j) {
        Edge temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    void heapify(int idx) {
        int smallest = idx;
        int l = left(idx);
        int r = right(idx);

        if (l < size && heap[l].weight < heap[smallest].weight)
            smallest = l;
        if (r < size && heap[r].weight < heap[smallest].weight)
            smallest = r;

        if (smallest != idx) {
            swap(idx, smallest);
            heapify(smallest);
        }
    }
};

// Disjoint Set Union (Union-Find) structure
class DSU {
public:
    int parent[MAX];
    int rank[MAX];

    void makeSet(int n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        int xroot = find(x);
        int yroot = find(y);

        if (xroot == yroot)
            return;

        if (rank[xroot] < rank[yroot]) {
            parent[xroot] = yroot;
        } else if (rank[xroot] > rank[yroot]) {
            parent[yroot] = xroot;
        } else {
            parent[yroot] = xroot;
            rank[xroot]++;
        }
    }
};

// Kruskal’s algorithm function
void kruskalMST(Edge edges[], int V, int E) {
    MinHeap minHeap;

    // Insert all edges into the min-heap
    for (int i = 0; i < E; i++) {
        minHeap.insert(edges[i]);
    }

    DSU dsu;
    dsu.makeSet(V);

    Edge mst[MAX];  // To store MST edges
    int mstSize = 0;
    int totalWeight = 0;

    cout << "Edges in the MST using Kruskal's Algorithm:\n";

    while (!minHeap.isEmpty() && mstSize < V - 1) {
        Edge minEdge = minHeap.extractMin();

        int uSet = dsu.find(minEdge.src);
        int vSet = dsu.find(minEdge.dest);

        // If they belong to different sets, add edge to MST
        if (uSet != vSet) {
            mst[mstSize++] = minEdge;
            totalWeight += minEdge.weight;
            dsu.unite(uSet, vSet);

            cout << minEdge.src << " - " << minEdge.dest << "  weight: " << minEdge.weight << "\n";
        }
    }

    cout << "Total weight of MST: " << totalWeight << "\n";
}

int main() {
    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    Edge edges[MAX_EDGES];

    cout << "Enter edges in format (src dest weight):\n";
    for (int i = 0; i < E; i++) {
        cout << "Edge " << i + 1 << ": ";
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    kruskalMST(edges, V, E);

    return 0;
}


//Time Complexity: O(eloge)