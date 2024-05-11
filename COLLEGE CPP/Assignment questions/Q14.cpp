
// #include <iostream>
// #include <string>
// using namespace std;
// class account
// {
//     // customer name, account number and type of account
// protected:
//     string name;
//     int acc_no;
//     string type_of_account;

// public:
//     account()
//     {

//         acc_no = 0;
        
//     }
//     void input_data()
//     {
//         cout << "Enter customer name, account number and type of account :" << endl;
//         getline(cin, name);
//         cin >> acc_no;
//         cin >> type_of_account;
//     }
//     virtual void display();
// };

// class cur_acct  : public account
// {
//     // customer name, account number and type of account
// protected:
//     float balance, min_balance;
//     float deposit, withdrawl;

// public:
//     cur_acct()
//     {
//         balance = 0;
//         min_balance = 1000;
//     }
//     void input_data()
//     {
//         account ::input_data();
//         cin >> balance;
//     }

//     // a. Include constructor for all the three classes.
//     // b. Accept deposit amount from the customer and update the balance.
//     // c. Display the balance.
//     // d. Compute and deposit interest.
//     // e. Permit withdrawal and update the balance.
//     // f. Check for minimum balance, impose penalty, necessary and update the balance.
//     float check_min_balance()
//     {
//         if (balance < 1000)
//         {
//             balance = balance + min_balance;
//             return balance;
//         }
//         else
//         {
//             return balance;
//         }
//         return balance;
//     }

//     float cal_deposit()
//     {
//         cout << "Enter how much amount you want to deposit : " << endl;
//         cin >> deposit;
//         balance = balance + deposit;
//         return deposit;
//     }

//     float cal_withdrawl()
//     {
//         cout << "Enter how much amount you want to withdrawl : " << endl;
//         cin >> withdrawl;
//         balance = balance - withdrawl;
//         return withdrawl;
//     }

//     void display()
//     {
//         cout << "customer name, account number and type of account :" << endl;
//         cout << name << endl
//              << acc_no << endl
//              << type_of_account << endl;
//         cout << "balance is :" << endl
//              << balance << endl;
//     }
// };

// int main()
// {

//     cur_acct c1;
//     c1.input_data();
//     c1.check_min_balance();
//     c1.cal_deposit();
//     c1.cal_withdrawl();
//     c1.display();


//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class account {
protected:
    string name;
    int acc_no;
    string type_of_account;

public:
    account() {
        acc_no = 0;
    }

    void input_data() {
        cout << "Enter customer name, account number, and type of account: " << endl;
        getline(cin, name);
        cin >> acc_no;
        cin.ignore(); // Consume the newline character
        getline(cin, type_of_account);
    }

    virtual void display() {}
};

class cur_acct : public account {
protected:
    float balance, min_balance;
    float deposit, withdrawl;

public:
    cur_acct() {
        balance = 0;
        min_balance = 1000;
    }

    void input_data() {
        account::input_data();
        cout << "Enter balance: ";
        cin >> balance;
    }

    float check_min_balance() {
        if (balance < 1000) {
            balance += min_balance;
        }
        return balance;
    }

    float cal_deposit() {
        cout << "Enter the amount you want to deposit: ";
        cin >> deposit;
        balance += deposit;
        return deposit;
    }

    float cal_withdrawl() {
        cout << "Enter the amount you want to withdraw: ";
        cin >> withdrawl;
        balance -= withdrawl;
        return withdrawl;
    }

    void display() {
        cout << "Customer name, account number, and type of account: " << endl;
        cout << name << endl << acc_no << endl << type_of_account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    cur_acct c1;
    c1.input_data();
    c1.check_min_balance();
    c1.cal_deposit();
    c1.cal_withdrawl();
    c1.display();

    return 0;
}
