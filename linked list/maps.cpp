#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> marksmap;
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        int mark;
        
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter mark of " << name << ": ";
        cin >> mark;

        marksmap[name] = mark;
    }

    // Displaying the map
    cout << "Student Marks:\n";
    for (const auto &entry : marksmap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
