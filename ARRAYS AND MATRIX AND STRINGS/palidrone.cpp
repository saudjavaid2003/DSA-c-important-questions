#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(const string& s) {
    // Step 1: Remove non-alphanumeric characters and convert to lowercase
    string cleaned_s;
    for (char c : s) {
        if (isalnum(c)) {
            cleaned_s += tolower(c);
        }
    }

    // Step 2: Check if the cleaned string is a palindrome
    string reversed_s(cleaned_s.rbegin(), cleaned_s.rend());
    return cleaned_s == reversed_s;
}

int main() {
    // Example usage:
    string input_string = "c1 O$d@eeD o1c";
    bool result = isPalindrome(input_string);

    if (result) {
        cout << "The string '" << input_string << "' is a palindrome." << endl;
    } else {
        cout << "The string '" << input_string << "' is not a palindrome." << endl;
    }

    return 0;
}
