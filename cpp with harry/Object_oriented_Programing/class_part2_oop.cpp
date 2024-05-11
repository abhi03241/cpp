#include <iostream>
#include <string>

using namespace std;

// NESTING of member function
class binary
{
    private :
        string s;
        void check_binary(void);
    public:
        void read(void);
        
        void ones_complement(void);
        void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary :: check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary Format" << endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void)
{
    check_binary(); // WE CAN USE HERE BUT NOT BELOW IN INT MAIN()--|:)
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }

    }
}

void binary :: display(void)
{
    cout<<"Displaying your Binary Number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }

    cout<<endl;

}

int main()
{
    binary b;

    b.read();

    /*b.check_binary();//WE CAN'T USE IT AS IT IS A PRIVATE */

    b.display();

    b.ones_complement();

    b.display();

    return 0;
}