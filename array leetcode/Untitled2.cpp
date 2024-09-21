#include <iostream>
#include <vector>

using namespace std;

void merging(vector<int>& a, int r, vector<int>& b, int s, vector<int>& c) {
    int na = 1; // Current position in array a
    int nb = 1; // Current position in array b
    int ptr = 1; // Current position in array c

    // Step 2: Compare and merge elements from a and b
    while (na <= r && nb <= s) {
        if (a[na] < b[nb]) {
            // Assign element from a to c
            c[ptr] = a[na];
            ptr++;
            na++;
        } else {
            // Assign element from b to c
            c[ptr] = b[nb];
            ptr++;
            nb++;
        }
    }

    // Step 3: Assign remaining elements from a or b to c
    while (na <= r) {
        c[ptr] = a[na];
        ptr++;
        na++;
    }
    while (nb <= s) {
        c[ptr] = b[nb];
        ptr++;
        nb++;
    }
}

int main() {
    // Example usage
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6};
    int r = a.size();
    int s = b.size();
    vector<int> c(r + s + 1); // Result array c with size equal to r + s + 1

    merging(a, r, b, s, c);

    // Print the merged array c
    cout << "Merged array c:";
    for (int i = 1; i < c.size(); ++i) {
        cout << " " << c[i];
    }
    cout << endl;

    return 0;
}
