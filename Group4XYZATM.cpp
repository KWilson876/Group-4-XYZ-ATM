#include<iostream>
using namespace std;



class Account {
public:
    double balance;
    Account() {
        cout << "\nEnter Initial Balance : ";
        cin >> balance;
        if (balance < 1000) {
            balance = 0.0;
            cout << "\nError! Initial Balance Invalid ";
        }
        else
            cout << "\nAccount Sucessfully Created\n";
    }
    void GetBalance() {
        cout << "\nCurrent Balance : $" << balance;
    }

    void Debit() {
        double debit;
        cout << "\nEnter The Amount To Be Withdrawn : ";
        cin >> debit;
        if (debit > balance)
        {
            cout << "\nDebit Amount Exceeded Account Balance.";
        }
        else {
            balance = balance - debit;
            cout << "\n Remaining Account balance : " << balance;
        }
    }
    void Credit() {
        double credit;
        cout << "\nEnter The Amount To Be Deposited : ";
        cin >> credit;
        balance = balance + credit;
        cout << "\nCurrent Balance : " << balance;
    }
   
};

int main() {
    Account info;
    int i;
    while (1) {
        cout << "\nMenu Options\n ";
        cout << "\n-------------------";
        cout << "\n1. Balance Enquiry \n2. Withdrawal \n3. Deposit \n4. Exit";
        cout << "\n--------------------\nEnter your choice\n : ";
        cin >> i;
        switch (i) {
        case 1: info.GetBalance();
            break;
        case 2: info.Debit();
            break;
        case 3: info.Credit();
            break;
        case 4: exit(0);
        }
    }
    return 0;
}