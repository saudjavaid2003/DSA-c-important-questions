#include<iostream>
#include<stack>
using namespace std;

void deleteelement(stack<int>& stackinput, int size, int count) {
    // base case
    if(count == size / 2) {
        cout << "Deleted element: " << stackinput.top() << endl;
        stackinput.pop();
        return;
    }
    int num = stackinput.top();
    stackinput.pop();
    deleteelement(stackinput, size, count + 1);
    stackinput.push(num);
}

int main() {
    stack<int> st;
    for(int i = 0; i < 5; i++) {
        int value;
        cout << "Enter the value: " << endl;
        cin >> value;
        st.push(value);
    }
    int size = st.size();
    int count = 0;
    deleteelement(st, size, count);
    
    cout << "Stack after deletion:" << endl;
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
