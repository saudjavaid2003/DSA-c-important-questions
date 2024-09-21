#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return qfront == rear;
    }

    void enqueue(int data) {
        if (rear == size)
            cout << "Queue is Full" << endl;
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (qfront == rear) {
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            // Reset the queue if all elements are dequeued
            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if (qfront == rear) {
            return -1;
        } else {
            return arr[qfront];
        }
    }

    ~Queue() {
        delete[] arr; // Destructor to free the allocated memory
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Front element is: " << q.front() << endl;

    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;

    q.enqueue(60);

    cout << "Front element is: " << q.front() << endl;

    while (!q.isEmpty()) {
        cout << "Dequeued element: " << q.dequeue() << endl;
    }

    cout << "Queue is empty: " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
