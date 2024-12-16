#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;        // Data part
    Node* next;      // Pointer to the next node
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();  // Allocate memory for the node
    newNode->data = value;       // Assign the value
    newNode->next = nullptr;     // Set next to null
    return newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {       // If the list is empty
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {  // Traverse to the end
            temp = temp->next;
        }
        temp->next = newNode;   // Attach the new node
    }
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {   // Traverse the list
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  // Initialize an empty list
    
    // Insert nodes
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    // Display the linked list
    cout << "Linked List: ";
    displayList(head);

    return 0;
}
