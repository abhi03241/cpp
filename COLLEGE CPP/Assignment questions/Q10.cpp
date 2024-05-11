#include <iostream>
using namespace std;

class Distance {
private:
    int m, cm;

public:
    Distance() {
        m = 0;
        cm = 0;
    }
    Distance(int a, int b) {
        m = a;
        cm = b;
        if (cm >= 100) {
            m += cm / 100;
            cm %= 100;
        }
    }
    void Display() {
        cout << "Distance in meter is: " << m << endl << "Distance in centimeter is: " << cm << endl;
    }
    Distance operator+(Distance);
    friend istream& operator>>(istream&, Distance&);
    friend ostream& operator<<(ostream&, const Distance&);
};

Distance Distance::operator+(Distance b) {
    Distance ans;
    ans.m = m + b.m + ((cm + b.cm) / 100);
    ans.cm = (cm + b.cm) % 100;
    return ans;
}

istream& operator>>(istream& din, Distance& d) {
    din >> d.m;
    din >> d.cm;
    if (d.cm >= 100) {
        d.m += d.cm / 100;
        d.cm %= 100;
    }
    return din;
}

ostream& operator<<(ostream& dout, const Distance& d) {
    dout << "Value of m is: " << d.m << endl;
    dout << "Value of cm is: " << d.cm << endl;
    return dout;
}

int main() {
    Distance a(9, 120), b(860, 3), c , d,e ;
    a.Display();
    b.Display();
    c = a + b;
    c.Display();

    cin>>d;
    cin>>e;

    cout<< d;
    cout<< e;

    e = e + d;

    cout <<e;
    

    return 0;
}



// #include <iostream>
// using namespace std;
// class Distance
// {
// private:
//     int m, cm;

// public:
//     Distance()
//     {
//         m = 0;
//         cm = 0;
//     }
//     Distance(int a, int b)
//     {
//         m = a;
//         cm = b;
//         if (cm >= 100)
//         {
//             m += cm / 100;
//             cm %= 100;
//         }
//     }
//     void Display()
//     {
//         cout << "Distance in meter is :" << m << endl
//              << "Distance in centimeter is :" << cm << endl;
//     }
//     Distance operator+(Distance);
//     friend istream &operator>>(istream &, Distance &);
//     friend ostream &operator<<(istream &, const Distance &);
// };

// Distance Distance::operator+(Distance b)
// {
//     Distance ans;
//     ans.cm = cm + b.cm;
//     if (ans.cm >= 100)
//     {
//         // ans.m += ans.cm % 100;  --->wrong  approach
//         // ans.cm /= 100;

//         ans.m += ans.cm / 100;
//         ans.cm %= 100;
//     }

//     return ans;
// }

// istream& operator>>(istream& din, Distance& d) {
//     din >> d.m;
//     din >> d.cm;
//     return din;
// }

// ostream& operator<<(ostream& dout, const Distance& d) {
//     dout << "Value of m is: " << d.m << endl;
//     dout << "Value of cm is: " << d.cm << endl;
//     return dout;
// }

// // istream &operator>>(istream &din, Distance &d)
// // {
// //     din >> d.m;
// //     din >> d.cm;

// //     return din;
// // }
// // ostream &operator<<(istream &dout, Distance &d)
// // {
// //     dout << "value of m is :" << d.m;
// //     dout << "value of n is :" << d.n;

// //     return dout;
// // }

// int main()
// {
//     Distance a(9, 120), b(860, 3), c;
//     a.Display();

//     b.Display();

//     c = a + b;
//     c.Display();
//     return 0;
// }