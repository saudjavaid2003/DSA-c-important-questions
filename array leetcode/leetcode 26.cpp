#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    
    int k = 1; // Index for inserting unique elements
    
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != nums[i - 1]) {
            nums[k++] = nums[i]; // Inserting unique elements
        }
    }
    
    return k;
}

int main() {
    vector<int> nums = {1, 2,2,2,3,3,3,4,4,4,5,5,5};
    
    int k = removeDuplicates(nums);
    
    cout << "Number of unique elements: " << k << endl;
    cout << "Unique elements: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}