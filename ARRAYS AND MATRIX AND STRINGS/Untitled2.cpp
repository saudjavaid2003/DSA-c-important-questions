#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[10] = {0, 1, 2, 0, 1, 0, 2, 0, 1, 0};
    int n = 10;

    // Count occurrences of each element
    int counts[3] = {0}; // Assuming elements are between 0 to 2
    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }

    // Rearrange the array based on occurrence count
    int index = 0;
    for (int i = 0; i < 3; i++) { // Assuming elements are between 0 to 2
        for (int j = 0; j < counts[i]; j++) {
            arr[index++] = i;
        }
    }

    // Output the rearranged array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
