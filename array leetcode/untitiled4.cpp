#include <iostream>
#include <vector>

using namespace std;

// Selection sort function
void selectionSort(vector<char>& arr, vector<int>& charToInt) {
    const int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (charToInt[arr[j] - 'a'] < charToInt[arr[min_index] - 'a']) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }
}

int main() {
    vector<char> arr = {'a', 'u', 'd',  'f', 'g'};
    
    // Create a mapping of characters to integers
    vector<int> charToInt(26);
    for (int i = 0; i < 26; ++i) {
        charToInt[i] = i;
    }

    // Sort characters using selection sort
    selectionSort(arr, charToInt);

    // Output sorted array
    cout << "Sorted array:" << endl;
    for (char c : arr) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
