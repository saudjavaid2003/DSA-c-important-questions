#include <iostream>

int findUniqueElement(int arr[], int size) {
    int result = 0;

    // Use XOR to find the unique element
    for (int i = 0; i < size; ++i) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    const int size = 10; // You can change the size of the array as needed
    int myArray[size] = {1, 2, 3, 2, 4, 1, 5, 3, 4, 5};

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    int uniqueElement = findUniqueElement(myArray, size);

    std::cout << "\nUnique Element: " << uniqueElement << "\n";

    return 0;
}

// ek aur approach ya hai kay jis element ko check kerna uskioccurnce dow hai kay nai wahan per
// minus dhal doun aur phir occurence count karoun agahr dow hai to yani ya unique lement nai hai 
// ynai ek element loun usko check karoun ab wo match ho gaya jahan wo match hoa hai wahan per -1 dhal doun count ko ++ kerdoun aur aisay bhi aur un occurnece ko ek aur array kay ender store kara loun//
// phir array ko prinr tkaroun if(arr[i]!=-1)aur prinrt aur simuktaneoulsy b[i] ko bhi jis may meri frequnce hai