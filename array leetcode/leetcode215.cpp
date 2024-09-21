#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int array[9] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int n;
    int k = 0;

    cout << "Enter the target value: ";
    cin >> n;
    
    
    sort(array, array + 9);
    
    
    int prev = array[0];
    k = 1;  
    
    for (int i = 1; i < 9; i++) {
        if (array[i] != prev) {
            k++;
            prev = array[i];
            if (k == n) {
                cout << "The answer is " << array[i] << endl;
                return 0;
            }
        }
    }

    cout << "The target value exceeds the number of distinct elements in the array." << endl;
    return 0;
// }
// #include <vector>
// #include <algorithm>
// #include <stdexcept>

// using namespace std;

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         
//         sort(nums.begin(), nums.end(), greater<int>());

//        
//         return nums[k - 1];
//     }
// };
