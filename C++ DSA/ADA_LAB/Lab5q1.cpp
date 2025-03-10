/* Q1> Implement 0/1 Knapsack problem using (Greedy method.)*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to store item properties
struct Item {
    int profit;
    int weight;
    double ratio;
    int index;
};

// Comparator to sort items by ratio in descending order
bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

void knapsackGreedy(vector<Item>& items, int n, int capacity) {
    int totalProfit = 0;
    int totalWeight = 0;

    cout << "\nSelected items (Greedy Approximation for 0/1 Knapsack):\n";
    cout << "Item\tWeight\tProfit\n";

    for (int i = 0; i < n; i++) {
        if (totalWeight + items[i].weight <= capacity) {
            totalWeight += items[i].weight;
            totalProfit += items[i].profit;
            cout << items[i].index + 1 << "\t" << items[i].weight << "\t" << items[i].profit << endl;
        }
    }

    cout << "\nTotal Profit: " << totalProfit << endl;
    cout << "Total Weight: " << totalWeight << endl;
}

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);

    cout << "Enter profit and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << " - Profit: ";
        cin >> items[i].profit;
        cout << "Item " << i + 1 << " - Weight: ";
        cin >> items[i].weight;
        items[i].ratio = (double)items[i].profit / items[i].weight;
        items[i].index = i;
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    // Sort items by ratio
    sort(items.begin(), items.end(), compare);

    knapsackGreedy(items, n, capacity);

    return 0;
}
