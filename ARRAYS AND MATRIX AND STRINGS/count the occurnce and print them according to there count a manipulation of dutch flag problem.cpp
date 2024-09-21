#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[10] = {0, 1, 2, 0, 1, 0, 2, 0, 1, 0};
    int n = 10;

    
    int counts[3] = {0};
    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }


    int index = 0;
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < counts[i]; j++) {
            arr[index++] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
