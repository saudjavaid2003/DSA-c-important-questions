#include <iostream>
#include <vector>

using namespace std;

void rearrangeArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        while (left <= right && arr[left] < 0) {
            left++;
        }

        while (left <= right && arr[right] >= 0) {
            right--;
        }
        if (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, -3, 4, -4, -5};

    cout << "Original array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;

    rearrangeArray(arr);

    cout << "Array after moving negative numbers to the left:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
