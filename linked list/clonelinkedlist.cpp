/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
private:
    // Helper function to insert node at tail of a linked list
    void insertAtTail(Node*& head, Node*& tail, int d) {
        Node* temp = new Node(d);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;

        // Step 1: Create a copy of the list without random pointers
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Create a map from original nodes to cloned nodes
        std::unordered_map<Node*, Node*> oldToNew;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 3: Assign random pointers for the cloned nodes
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL) {
            cloneNode->random = oldToNew[originalNode->random];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
