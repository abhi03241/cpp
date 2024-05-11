#include <iostream>
using namespace std;
class Date
{
    int dd, mm, yy;

public:
    Date operator++(int a )
    {
        cout<<"operator after incrementation is : "<<endl;
        Date result;
        if (dd >= 30)
        {
            result.mm = mm++;
            result.dd = 01;
        }
        else if(mm > 12)
        {
            result.yy = yy++;
            dd = 01;
            for (int i = 0; i < (mm/12); i++)
            {
                mm = i;
            }
            
            mm = 01;
        }
        else
        {
            result.mm=mm++;
            result.dd=dd++;
            result.yy=yy++;
        }
        
        return result;
    }

    friend ostream &operator<<(ostream &, Date &);
    friend istream &operator>>(istream &, Date &);
};

// complex :: operator++()
// {

// }

istream &operator>>(istream &din, Date &c)
{
    cout<<"Input date , month , and year "<<endl;

    din >> c.dd;
    din >> c.mm;
    din >> c.yy;
    return din;
}

ostream &operator<<(ostream &dout, Date &c)
{
    dout << "DATE is :" << c.dd << endl
         << "MONTH is :" << c.mm << endl
         << "YEAR is :" << c.yy << endl;
    return dout;
}

int main()
{
    Date d1, d2;
    cin >> d1 >> d2;

    cout << d1 << endl
         << d2;

    d2++;
    cout<<d2;

    return 0;
}