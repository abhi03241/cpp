// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// class EMP
// {
// public:
//     string name;
//     string emp_id;
//     string contact_number;
//     string address;
//     int year_of_joining;
//     string department;

//     EMP(string name, string emp_id, string contact_number, string address, int year_of_joining, string department)
//     {
//         this->name = name;
//         this->emp_id = emp_id;
//         this->contact_number = contact_number;
//         this->address = address;
//         this->year_of_joining = year_of_joining;
//         this->department = department;
//     }

//     void display()
//     {
//         cout << "Name: " << name << ", Employee ID: " << emp_id << ", Contact: " << contact_number
//              << ", Address: " << address << ", Joining Year: " << year_of_joining << ", Department: " << department << endl;
//     }
// };

// int main()
// {

//     vector<EMP> database;

//     database.push_back(EMP("Abhishek", "E001", "8839042720", "Pipariya", 2028, "IT"));
//     database.push_back(EMP("Tavi", "E002", "8770172271", "Dewas", 2028, "IT"));

//     for (auto &emp : database)
//     {
//         emp.display();
//     }
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

class EMP {
private:
    string name;
     int  employee_id;
    double salary;
    static int count; // Static member to track the count of employees

public:
    // Constructor
    EMP() {
        // Automatically generate employee ID
        employee_id = count++;
    }

    // Member function to input data
    void getdata()  {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    // Member function to display data
    void display_data() const {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Initializing static member count
int EMP::count = 1001;

int main() {
    const int num_employees = 2;
    EMP employees[num_employees];

    cout << "Enter details for " << num_employees << " employees:" << endl;
    for (int i = 0; i < num_employees; ++i) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].getdata();
    }

    cout << "\nEmployee details:" << endl;
    for (int i = 0; i < num_employees; ++i) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        employees[i].display_data();
    }

    return 0;
}
