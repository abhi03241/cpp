#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string name;
    string enrollmentNo;
    static int rollNoCounter; // Static member variable for roll number counter
    int rollNo;
    vector<int> theoryMarks;
    vector<int> practicalMarks;
    vector<char> grades;

public:
    // Constructor with default values
    Student()
    {
        rollNo = ++rollNoCounter; // Increment and assign roll number
    }

    // Overloaded constructor
    Student(string n, string enNo, vector<int> theory, vector<int> practical)
    {
        name = n;
        enrollmentNo = enNo;
        rollNo = ++rollNoCounter; // Increment and assign roll number
        theoryMarks = theory;
        practicalMarks = practical;
        calculateGrades();
    }

    // Overloading << operator for output
    friend ostream &operator<<(ostream &dout, const Student &student)
    {
        dout << "Name: " << student.name << endl;
        dout << "Enrollment No: " << student.enrollmentNo << endl;
        dout << "Roll No: " << student.rollNo << endl;
        dout << "Theory Marks: ";
        for (int mark : student.theoryMarks)
        {
            dout << mark << " ";
        }
        dout << endl;
        dout << "Practical Marks: ";
        for (int mark : student.practicalMarks)
        {
            dout << mark << " ";
        }
        dout << endl;
        dout << "Grades: ";
        for (char grade : student.grades)
        {
            dout << grade << " ";
        }
        dout << endl;
        return dout;
    }

    // Overloading >> operator for input
    friend istream &operator>>(istream &din, Student &student)
    {
        cout << "Enter name: ";
        getline(din, student.name); // Read the entire line including spaces
        cout << "Enter enrollment No: ";
        din >> student.enrollmentNo;

        // for theory marks
        cout << "Enter theory marks " << endl;
        student.theoryMarks.resize(5);
        for (int i = 0; i < 5; ++i)
        {
            din >> student.theoryMarks[i];
        }

        // for practical marks
        do
        {
            cout << "Enter practical Marks (5 subjects, each not exceeding 40): ";
            student.practicalMarks.resize(5);
            for (int i = 0; i < 5; ++i)
            {
                din >> student.practicalMarks[i];
                if (student.practicalMarks[i] > 40)
                {
                    cout << "Theory marks should not exceed 30. Please re-enter." << endl;
                    i = -1; // Reset loop counter to re-enter marks
                }
            }
        } while (student.practicalMarks.size() != 5);

        student.calculateGrades();
        return din;
    }

    // Function to calculate grades
    void calculateGrades()
    {
        grades.clear();
        for (int i = 0; i < 5; ++i)
        {
            int totalMarks = theoryMarks[i] + practicalMarks[i];
            if (totalMarks >= 90)
            {
                grades.push_back('A');
            }
            else if (totalMarks >= 80)
            {
                grades.push_back('B');
            }
            else if (totalMarks >= 70)
            {
                grades.push_back('C');
            }
            else if (totalMarks >= 60)
            {
                grades.push_back('D');
            }
            else if (totalMarks >= 50)
            {
                grades.push_back('E');
            }
            else
            {
                grades.push_back('F');
            }
        }
    }
};

int Student::rollNoCounter = 0; // Initializing static member variable

int main()
{

    vector<int> theoryMarks; //= {80, 75, 85, 90, 88};
    cout << "enter the theory marks of 5 students" << endl;
    for (int i = 0; i < 5; i++)
    {
        int elements;
        cin >> elements;
        theoryMarks.push_back(elements);
    }

    vector<int> practicalMarks; //= {70, 65, 80, 85, 82};
    cout << "enter the practical marks of 5 students" << endl;
    for (int i = 0; i < 5; i++)
    {
        int elements;
        cin >> elements;
        practicalMarks.push_back(elements);
    }
    Student student1("John Doe", "EN12345", theoryMarks, practicalMarks);
    cout << student1;

    // Input example for another student
    Student student2;
    cin >> student2;
    cout << student2;

    return 0;
}
