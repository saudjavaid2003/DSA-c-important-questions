#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(const vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (nums[mid] > nums[high]) {
            // The pivot is in the right half, move low to mid + 1
            low = mid + 1;
        } else {
            // The pivot is in the left half or at mid, move high to mid
            high = mid;
        }
    }

    // At this point, low and high point to the pivot index
    return low;
}

int main() {
    // Example of a sorted and rotated array
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int pivotIndex = findPivotIndex(nums);

    cout << "Pivot Index: " << pivotIndex << endl;

    return 0;
}
