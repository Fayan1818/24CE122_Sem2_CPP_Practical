#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string holderName;
    int accountNumber;
    float balance;

public:
    Account() {
        holderName = "Default";
        accountNumber = 0;
        balance = 0.0;
    }

    Account(string name, int accNumber, float initialBalance) {
        holderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accNumber;
    float initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    Account acc1(name, accNumber, initialBalance);

    acc1.displayAccountDetails();

    int choice;
    float amount;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Account Details\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                acc1.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                acc1.withdraw(amount);
                break;
            case 3:
                acc1.displayAccountDetails();
                break;
            case 4:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    cout << "\n24CE122_Fayan" << endl;

    return 0;
}
