#include <iostream>

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size /2; ++i) {
        // Swap elements at the beginning and end of the array
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    reverseArray(myArray, size);

    std::cout << "\nReversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
