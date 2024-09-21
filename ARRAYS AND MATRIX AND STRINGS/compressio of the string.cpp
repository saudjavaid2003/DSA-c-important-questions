#include <iostream>
#include <vector>

using namespace std;

int compress(vector<char>& chars) {
   
    int writeIndex = 0;
    int readIndex = 0;

   
    while (readIndex < chars.size()) {
        
        char currentChar = chars[readIndex];
        int count = 0;

        
        while (readIndex < chars.size() && chars[readIndex] == currentChar) {
            readIndex++;
            count++;
        }

        
        chars[writeIndex++] = currentChar;

        if (count > 1) {
            
            string countStr = to_string(count);
            for (char c : countStr) {
                chars[writeIndex++] = c;
            }
        }
    }

   
    return writeIndex;
}


int main() {
   
    vector<char> chars = {'a', 'b', 'b', 'c', 'c', 'c'};

    int compressedLength = compress(chars);

   
    cout << "Output: Return " << compressedLength << ", and the first " << compressedLength << " characters of the input array should be: [";
    for (int i = 0; i < compressedLength; i++) {
        cout << "\"" << chars[i] << "\"";
        if (i < compressedLength - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
