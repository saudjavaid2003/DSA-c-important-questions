#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to detect cycle using Floyd's Tortoise and Hare algorithm
node* floydCycleDetection(node* head) {
    if (head == NULL) {
        return NULL;
    }

    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow;  // Cycle detected
        }
    }

    return NULL;  // No cycle
}

// Function to get the starting node of the cycle
node* getStartingNode(node* head) {
    if (head == NULL) {
        return NULL;
    }

    node* intersection = floydCycleDetection(head);
    if (intersection == NULL) {
        cout << "No cycle" << endl;
        return NULL;
    }

    // Find the start of the cycle
    node* slow = head;
    node* fast = intersection;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  // Start of the cycle
}

// Utility function to print the list
void printList(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function for testing
int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = head->next->next;  // Create a cycle

    node* startNode = getStartingNode(head);
    if (startNode != NULL) {
        cout << "Cycle starts at node with data: " << startNode->data << endl;
    }

    return 0;
}
