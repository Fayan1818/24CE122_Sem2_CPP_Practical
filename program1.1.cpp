#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:

    string name;

    int accountNumber;
    double balance;

public:
    void insertData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: ";
        cin >> balance;
        cin.ignore();
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient funds." << endl;
    }

    void displayBalance() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    cout << "Name: 24CE122 - Fayan Suthar" << endl;

    BankAccount acc;
    int choice;
    double amount;
    acc.insertData();

    do {
        cout << "1.Deposit 2.Withdraw 3.Show Balance 4.Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 3:
                acc.displayBalance();
                break;
            case 4:
                cout << "Thank you." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
