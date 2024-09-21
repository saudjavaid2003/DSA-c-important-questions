#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 0, 0, 2, 2, 1, 0, 1, 2};
    int temp;
    int low = 0;
    int high = 9;
    int mid = 0;
    
    while(mid <= high) {
        if(arr[mid] == 0) {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else if(arr[mid] == 2) {
            temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
            
        }
    }
    
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
