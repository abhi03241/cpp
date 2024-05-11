#include <bits/stdc++.h>
using namespace std;

const int n = 10;
class shop
{
protected:
    int m;
    string name[n];
    int code[n];
    float cost[n];

public:
    void get()
    {
        cout << "enter no of items ";
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cout << "enter name, code and cost for item no " << i + 1 << endl;
            cin.ignore();
            getline(cin, name[i]);
            cin >> code[i] ;
            cin >> cost[i];
            cout << cost[i];
        }
    }

    void display()
    {

        {
            cout << "your list is  \n\n"
                 << cout.fill('-')
                 << std::left << setw(30) << "NAME"
                 << std::left << setw(30) << "CODE"
                 << std::right  << "COST\n";

            for (int i = 0; i < m; i++)
            {
                cout << cout.fill('-')
                     << std::left << setw(30) << name[i]
                     << std::left << setw(30) << code[i];
                     cout<<  setprecision(2)<<fixed<<std::right   << cost[i] << endl;
            }
        }
    }
};
int main()
{
    int n = 2;
    shop s;
    s.get();
    s.display();

    return 0;
}
// #include <iostream>
// using namespace std;

// class BankDeposit {
// private:
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

// public:
//     // Default constructor
//     BankDeposit() {}

//     // Constructor with interest rate as float
//     BankDeposit(int p, int y, float r) {
//         principal = p;
//         years = y;
//         interestRate = r;
//         // Calculate return value
//         returnValue = principal;
//         for (int i = 0; i < y; i++) {
//             returnValue *= (1 + r);
//         }
//     }

//     // Constructor with interest rate as integer
//     BankDeposit(int p, int y, int R) {
//         principal = p;
//         years = y;
//         interestRate = float(R) / 100;
//         // Calculate return value
//         returnValue = principal;
//         for (int i = 0; i < y; i++) {
//             returnValue *= (1 + interestRate);
//         }
//     }

//     // Function to display details
//     void show() {
//         cout << "Principal amount was " << principal
//              << ". Return value after " << years
//              << " years is " << returnValue << endl;
//     }
// };

// int main() {

//     int p, y, R;

//     cout << "Enter the principal amount (p): ";
//     cin >> p;

//     cout << "Enter the number of years (y): ";
//     cin >> y;

//     cout << "Enter the interest rate as a percentage (r): ";
//     cin >> r;

//      cout << "Enter the interest rate as a percentage (r): ";
//     cin >> R;

//     BankDeposit bd1(p, y, float(R) / 100);
//     bd1.show();
//     BankDeposit bd2(p, y, R);
//     bd2.show();
    

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Base {
// protected:
//     int baseValue;
// public:
//     // Base class constructor that accepts an integer parameter
//     Base(int value) {
//         baseValue = value;
//         cout << "Base class constructor called." << endl;
//     }

//     void display() {
//         cout << "Base value: " << baseValue << endl;
//     }
// };

// class Derived : public Base {
// private:
//     int derivedValue;
// public:
//     // Derived class constructor that accepts two integer parameters
//     Derived(int base, int derived) : Base(base) {
//         derivedValue = derived;
//         cout << "Derived class constructor called." << endl;
//     }

//     void display() {
//         Base::display(); // Calling base class display function
//         cout << "Derived value: " << derivedValue << endl;
//     }
// };

// int main() {
//     // Creating a Derived object
//     Derived derivedObj(10, 20);
//     derivedObj.display();

//     return 0;
// }
