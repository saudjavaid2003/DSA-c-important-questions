#include <iostream>
#include <vector>

using namespace std;

int find_min(vector<int>& arr, int k, int n) {
    // Step 1: Set min=a[k] and loc=k
    int min_val = arr[k];
    int loc = k;
    
    // Step 2: Repeat for j=k+1, k+2, ..., n
    for (int j = k+1; j < n; ++j) {
        // If min_val > arr[j], update min_val and loc
        if (min_val > arr[j]) {
            min_val = arr[j];
            loc = j;
        }
    }
    
    // Step 3: Return loc
    return loc;
}

void selection_sort(vector<int>& arr, int n) {
    // Step 1: Repeat for k=1,2,...,n-1
    for (int k = 0; k < n-1; ++k) {
        // Call find_min to get the location of the smallest value
        int loc = find_min(arr, k, n);
        
        // Swap arr[k] and arr[loc]
        int temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }
}

int main() {
    vector<int> arr = {6,7,8,9,3};
    int n = arr.size();
    
    selection_sort(arr, n);
    
    cout << "Sorted array:";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;
    
    return 0;
}
