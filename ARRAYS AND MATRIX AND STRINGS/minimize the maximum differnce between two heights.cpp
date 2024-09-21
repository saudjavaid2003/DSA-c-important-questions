#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimizeDifference(vector<int>& A, int K) {
    int N = A.size();
    // Sort the array
    sort(A.begin(), A.end());
    
    // Initialize the result with the initial difference
    int result = A[N - 1] - A[0];

    // Adjust the minimum and maximum values, and update the result
    int minVal = A[0] + K;
    int maxVal = A[N - 1] - K;
    for (int i = 0; i < N - 1; ++i) {
        // Calculate potential minimum and maximum values after adjustment
        int currMin = min(A[i + 1] - K, minVal);
        int currMax = max(A[i] + K, maxVal);
        // Update result with the minimum difference found so far
        result = min(result, currMax - currMin);
    }

    return result;
}

int main() {
    // Example usage
    vector<int> A = {1, 2, 3, 4, 5};
    int K = 2;
    cout << "Minimum difference after adjustments: " << minimizeDifference(A, K) << endl;

    return 0;
}
