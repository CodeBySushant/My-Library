// Solid Right Half Diamond Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the rhombus: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= rows; ++j) {
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
