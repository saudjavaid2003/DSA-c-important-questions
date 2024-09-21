#include<iostream>
#include<stack>
using namespace std;

void sortedinsert(stack<int>& st, int num) {
    if(st.empty() || (!st.empty() && st.top() < num)) {
        st.push(num);
        return;
    }
    int val = st.top();
    st.pop();
    sortedinsert(st, num);
    st.push(val);
}

void sortedstack(stack<int>& st) {
    if(st.empty())
        return;
        
    int num = st.top();
    st.pop();
    sortedstack(st);
    sortedinsert(st, num);
}

int main() {
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(5);

    sortedstack(s);
    
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
