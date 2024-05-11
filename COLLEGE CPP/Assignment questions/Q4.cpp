// Write a menu driven program to perform following:
// a) Input a matrix
// b) Display matrix
// c) Add two matrix
// d) Multiply two matrixes
// e) Transpose a matrix

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string item_name, item_code;
    double cost;

    cout << "Enter item details (item name, item code, cost):" << endl;
    while (cin >> item_name >> item_code >> cost) {
        // Set fill character to hyphen for unused spaces
        cout.fill('-');

        // Output three columns with left-justified item name and code, and right-justified cost
        cout.width(20);
        cout << left << item_name;
        cout.width(10);
        cout << left << item_code;
        cout.width(10);
        cout << right << fixed << setprecision(2) << cost << endl;
    }

    return 0;
}
