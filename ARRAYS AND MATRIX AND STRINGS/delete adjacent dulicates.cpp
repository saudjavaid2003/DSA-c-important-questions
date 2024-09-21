#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "azxxzy";

    for (int i = 0; i < str.length();) {
        if (i < str.length() - 1 && str[i] == str[i + 1]) {
            // Remove adjacent duplicates
            str.erase(i, 2);
            i = 0;  // Reset the index to check from the beginning
        } else {
            i++;
        }
    }

    cout << "The resultant array is: " << endl;
    for (int j = 0; j < str.length(); j++) {
        cout << str[j];
    }
    
    return 0;
}
