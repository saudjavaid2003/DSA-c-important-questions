class Solution {
private:
    int binarySearch(const std::vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }
    
    int findPivot(const std::vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }
    
public:
    int search(const std::vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        
        if (pivotIndex == 0) {
            return binarySearch(nums, 0, nums.size() - 1, target);
        }
        
        if (target >= nums[0] && target <= nums[pivotIndex - 1]) {
            return binarySearch(nums, 0, pivotIndex - 1, target);
        } else {
            return binarySearch(nums, pivotIndex, nums.size() - 1, target);
        }
    }
};
