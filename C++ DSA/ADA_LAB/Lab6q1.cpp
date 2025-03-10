/* Q1> Write a program to implement Prim's method for MST in a graph (E, V) using heaps.*/

#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 999999; // Large value to replace INT_MAX

// Structure for MinHeap node
struct MinHeapNode {
    int vertex;
    int key;
};

// MinHeap class implementation
class MinHeap {
public:
    MinHeapNode heapArray[MAX];
    int position[MAX];
    int size;

    MinHeap(int capacity) {
        size = 0;
        for (int i = 0; i < capacity; i++) {
            heapArray[i].vertex = i;
            heapArray[i].key = INF;
            position[i] = i;
        }
    }

    void swapNodes(int idx1, int idx2) {
        MinHeapNode temp = heapArray[idx1];
        heapArray[idx1] = heapArray[idx2];
        heapArray[idx2] = temp;

        // Update positions
        position[heapArray[idx1].vertex] = idx1;
        position[heapArray[idx2].vertex] = idx2;
    }

    void minHeapify(int idx) {
        int smallest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;

        if (left < size && heapArray[left].key < heapArray[smallest].key)
            smallest = left;
        if (right < size && heapArray[right].key < heapArray[smallest].key)
            smallest = right;

        if (smallest != idx) {
            swapNodes(idx, smallest);
            minHeapify(smallest);
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    MinHeapNode extractMin() {
        MinHeapNode root = heapArray[0];
        MinHeapNode lastNode = heapArray[size - 1];

        heapArray[0] = lastNode;

        position[root.vertex] = size - 1;
        position[lastNode.vertex] = 0;

        size--;
        minHeapify(0);

        return root;
    }

    void decreaseKey(int v, int newKey) {
        int idx = position[v];
        heapArray[idx].key = newKey;

        while (idx != 0 && heapArray[idx].key < heapArray[(idx - 1) / 2].key) {
            swapNodes(idx, (idx - 1) / 2);
            idx = (idx - 1) / 2;
        }
    }

    bool isInMinHeap(int v) {
        return position[v] < size;
    }
};

// Function to print the MST
void printMST(int parent[], int graph[MAX][MAX], int V) {
    int totalWeight = 0;
    cout << "\nEdge \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << "\n";
        totalWeight += graph[i][parent[i]];
    }
    cout << "Total weight of MST: " << totalWeight << endl;
}

void primMST(int graph[MAX][MAX], int V) {
    int parent[MAX]; // To store MST
    int key[MAX];    // Minimum weight to connect to MST

    MinHeap minHeap(V);

    for (int v = 0; v < V; v++) {
        key[v] = INF;
        parent[v] = -1;
        minHeap.heapArray[v].vertex = v;
        minHeap.heapArray[v].key = key[v];
        minHeap.position[v] = v;
    }

    key[0] = 0;
    minHeap.heapArray[0].key = 0;
    minHeap.size = V;

    while (!minHeap.isEmpty()) {
        MinHeapNode minNode = minHeap.extractMin();
        int u = minNode.vertex;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] != 0 && minHeap.isInMinHeap(v) && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
                minHeap.decreaseKey(v, key[v]);
            }
        }
    }

    printMST(parent, graph, V);
}

int main() {
    int V;
    cout << "Enter the number of vertices in the graph: ";
    cin >> V;

    int graph[MAX][MAX];

    cout << "Enter the adjacency matrix for the graph (0 if no edge):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    primMST(graph, V);

    return 0;
}

//Time COmplexity: O(V^2)