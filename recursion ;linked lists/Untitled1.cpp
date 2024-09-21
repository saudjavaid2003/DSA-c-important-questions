#include <iostream>

// Function to insert element at specified index in array
void insertAtIndex(int arr[], int& size, int index, int element) {
    // Check if index is valid
    if (index < 0 || index > size) {
        std::cout << "Invalid index!\n";
        return;
    }
    
    // Shift elements to the right to make space for the new element
    for (int i = size-1; i >=index; i--) {
        arr[i+1] = arr[i];
    }
    
    // Insert the new element at the specified index
    arr[index] = element;
    
    // Increment the size of the array
    size++;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array
    
    int index, element;
    
    // Input index and element to be inserted
    std::cout << "Enter the index where you want to insert the element: ";
    std::cin >> index;
    
    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;
    
    // Insert element at specified index
    insertAtIndex(arr, size, index, element);
    
    // Print the updated array
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
