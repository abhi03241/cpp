#include<iostream>
#include<string>

using namespace std;

class time {
    int hr;
    int min;

public:
    void taketime();
    void displaytime();
    void sum(time T1, time T2);
    friend time subtract(time T1, time T2);
};

void time::taketime() {
    cout << "Enter the time in hour: ";
    cin >> hr;
    cout << "Enter the time in min: ";
    cin >> min;
}

void time::displaytime() {
    cout << "Time in hr: " << hr << endl;
    cout << "Time in min: " << min << endl;
}

void time::sum(time T1, time T2) {
    hr = T1.hr + T2.hr;
    min = T1.min + T2.min;
    if (min >= 60) {
        hr += min / 60;
        min %= 60;
    }
}

time subtract(time T1, time T2) {
    time result ;
    int total1 = T1.hr * 60 - T1.min ;
    int total2 =  T2.hr *60  - T2.min;
    int diff = total1 - total2;
    if(diff < 0)
    {
        diff = -diff;
    }
    result.hr = diff/60;
    result.min = diff%60;
    return result;
}

int main() {
    time T1, T2, T3;
    cout << "Enter time T1:" << endl;
    T1.taketime();
    cout << "Enter time T2:" << endl;
    T2.taketime();

    T3.sum(T1, T2);
    cout << "Sum of T1 and T2:" << endl;
    T3.displaytime();

    T3 = subtract(T1, T2);
    cout << "Difference of T1 and T2:" << endl;
    T3.displaytime();
    
    return 0;
}

