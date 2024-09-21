#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value) {
        // Check whether the queue is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            return false;
        }
        else if (front == -1) { // First element to push
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0) {
            rear = 0; // To maintain cyclic nature
        }
        else { // Normal flow
            rear++;
        }
        // Push inside the queue
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue() {
        if (front == -1) { // Check if queue is empty
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) { // Single element present
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0; // To maintain cyclic nature
        }
        else { // Normal flow
            front++;
        }
        return ans;
    }
};

int main() {
    CircularQueue q(5);

    cout << "Enqueue 10: " << q.enqueue(10) << endl;
    cout << "Enqueue 20: " << q.enqueue(20) << endl;
    cout << "Enqueue 30: " << q.enqueue(30) << endl;
    cout << "Enqueue 40: " << q.enqueue(40) << endl;
    cout << "Enqueue 50: " << q.enqueue(50) << endl;
    cout << "Enqueue 60 (should be false): " << q.enqueue(60) << endl;

    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue (should be -1): " << q.dequeue() << endl;

    return 0;
}
