#include<iostream>
using namespace std;

class student
{
protected :
    int roll_no;
public :
    void set_roll_no(int );
    void get_roll_no(void);
};

void student :: set_roll_no(int r)
{
    roll_no = r;
}
void student :: get_roll_no(void)
{
    cout<<"The roll no is : "<<roll_no<<endl;
}

// Derived class ---->
class Exam : public student 
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_no();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result Abhi;
    Abhi.set_roll_no(4);
    Abhi.set_marks(94.0, 90.0);
    Abhi.display_results();
    return 0;
}
