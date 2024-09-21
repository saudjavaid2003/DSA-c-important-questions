#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

vector<int> nextSmallerElement(const vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    //[1,-1,4,4,-1,-1]
}

vector<int> prevSmallerElement(const vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    //-1,-1,1,2,1,4
}

int largestRectangleArea(const vector<int>& heights) {
    int n = heights.size();

    vector<int> next = nextSmallerElement(heights, n);
    vector<int> prev = prevSmallerElement(heights, n);

    int area = INT_MIN;
    for(int i = 0; i < n; i++) {
        int l = heights[i];

        if(next[i] == -1) {
            next[i] = n;
            // ya is liya ha kay aghar koi bhi right side per chota element na milay to 
            //direct hi size kay barabar rukh do
            
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area: " << largestRectangleArea(heights) << endl;
    return 0;
}
