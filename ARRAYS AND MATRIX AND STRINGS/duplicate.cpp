

#include <iostream>

int findDuplicate(int arr[], int size) {
    // Phase 1: Detect if there is a cycle using Floyd's Tortoise and Hare algorithm
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Phase 2: Find the entrance to the cycle (duplicate element)
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow; // or fast, both will be pointing to the duplicate element
}

int main() {
    const int size = 5; // You can change the size of the array as needed
    int myArray[size] = {1, 2, 3, 4, 4};

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    int duplicate = findDuplicate(myArray, size);

    std::cout << "\nDuplicate Element: " << duplicate << "\n";

    return 0;
}