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

void insertAtHead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* kReverse(node* head, int k) {
    // Base case
    if (head == NULL) {
        return NULL;
    }

    // Reverse first k nodes
    node* next = NULL;
    node* curr = head;
    node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursively call for the remaining list
    if (next != NULL) {
        head->next = kReverse(next, k);
    }
// actually head->next is pointing to prev
    // prev is the new head of the reversed group
    return prev;
}

int main() {
    node* node1 = new node(10);
    node* head = node1;

    for (int i = 0; i < 3; i++) {
        int value;
        cout << "Enter the value for the linked list: ";
        cin >> value;
        insertAtHead(head, value);
    }

    cout << "Original Linked List: ";
    print(head);

    node* newHead = kReverse(head, 2);

    cout << "Reversed Linked List in groups of 2: ";
    print(newHead);

    return 0;
}

// Here's a breakdown to clarify:

// Key Points:
// Reversal Process:

// During the reversal of the first k nodes, the head (which starts as the first node of the segment) is gradually moved forward as we reverse the links between nodes.
// prev is constantly updated to point to the current node (curr) that has just been reversed. By the end of the loop, prev points to what was originally the last node of the k segment but is now the first node of the reversed segment.
// After the Loop:

// After reversing the first k nodes, head (which was originally the first node of this segment) is now the last node of this reversed segment.
// At this point, head->next is pointing to NULL temporarily because we haven't connected it to the next segment yet.
// Recursive Connection:

// The recursive call head->next = kReverse(next, k); connects the last node of the current reversed segment (which is head) to the first node of the next reversed segment (which is returned by the recursive call).
// This step is crucial because it links the reversed segments together.
// Returning prev:

// We return prev because prev is now the new head of the reversed segment. This new head needs to be connected to the previous segment (if any), or it becomes the new head of the entire list if we're at the top level of the recursion.
// Visualizing with an Example:
// Consider a list 1 -> 2 -> 3 -> 4 -> 5 -> 6 with k = 2:

// Initial State:

// head starts at 1.
// curr is also at 1.
// prev is NULL.
// After Reversing First 2 Nodes:

// The loop runs twice:
// First iteration: 1 -> NULL, prev = 1, curr = 2
// Second iteration: 2 -> 1 -> NULL, prev = 2, curr = 3
// Now, prev points to 2, and head (which is still 1) will be connected to the result of the next recursive call.
// Recursive Call:

// head->next = kReverse(3, 2);
// This call will reverse 3 -> 4, so head->next becomes 4 -> 3 -> ....
// The whole segment is now connected as 2 -> 1 -> 4 -> 3 -> ....
// Returning:

// The function returns prev, which is the new head (2 in this case).
// Conclusion:
// head->next connects the last node of the current reversed segment (which was the original head) to the first node of the next reversed segment.
// prev is the new head of the reversed segment, and we return it to ensure the segments are correctly linked together.
// This recursive structure allows the list to be reversed in chunks of k and then stitched back together in the correct order.







