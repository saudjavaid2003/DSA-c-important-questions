#include <iostream>
using namespace std;

class Deque {
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    Deque(int n) {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque.
    bool pushFront(int x) {
        if (isFull()) {
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque.
    bool pushRear(int x) {
        if (isFull()) {
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque.
    int popFront() {
        if (isEmpty()) {
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque.
    int popRear() {
        if (isEmpty()) {
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque.
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque.
    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty.
    bool isEmpty() {
        return front == -1;
    }

    // Returns true if the deque is full.
    bool isFull() {
        return (front == 0 && rear == size - 1) || (front == rear + 1);
    }

    // Destructor to free allocated memory.
    ~Deque() {
        delete[] arr;
    }
};

int main() {
    Deque dq(5); // Create a deque of size 5

    // Testing push operations
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(30);
    dq.pushFront(40);

    cout << "Front element: " << dq.getFront() << endl; // Should print 40
    cout << "Rear element: " << dq.getRear() << endl;   // Should print 20

    // Testing pop operations
    cout << "Popped from front: " << dq.popFront() << endl; // Should print 40
    cout << "Popped from rear: " << dq.popRear() << endl;   // Should print 20

    // Check current state
    cout << "Front element: " << dq.getFront() << endl; // Should print 30
    cout << "Rear element: " << dq.getRear() << endl;   // Should print 10

    return 0;
}
