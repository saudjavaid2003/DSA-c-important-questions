#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minimizeDifference(vector<int>& A, int K) {
    int N = A.size();
    sort(A.begin(), A.end());
    int result = A[N - 1] - A[0];
    int minVal = A[0] + K;
    int maxVal = A[N - 1] - K;
    for (int i = 0; i < N - 1; ++i) {
        int currMin = min(A[i + 1] - K, minVal);
        int currMax = max(A[i] + K, maxVal);
        result = min(result, currMax - currMin);
    }
    return result;
int main(){
    vector<int> A = {3,5,2,1,0};
    int K = 2;
    cout << "Minimum difference after adjustments: " << minimizeDifference(A, K) << endl;
    return 0;
}

}