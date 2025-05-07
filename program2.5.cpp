#include<iostream>
#include<math.h>
using namespace std;

class Loan {
    public:
    int id, term;
    string name;
    float amount, rate;

    Loan() {
        id = 0;
        name = "N/A";
        amount = 0;
        rate = 0;
        term = 0;
    }

    Loan(int i, string n, float a, float r, int t) {
        id = i;
        name = n;
        amount = a;
        rate = r;
        term = t;
    }

    void show() {
        cout << "Loan ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Amount: " << amount << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Term: " << term << " months" << endl;
        float R = (rate / 12) / 100;
        float emi = amount * R * pow(1+R, term) / (pow(1+R, term) - 1);
        cout << "EMI: " << emi << endl << endl;
    }
};

int main() {
    int id, term;
    string name;
    float amt, rate;

    cout << "Enter Loan ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Amount: ";
    cin >> amt;
    cout << "Enter Interest Rate: ";
    cin >> rate;
    cout << "Enter Term (months): ";
    cin >> term;

    Loan l1(id, name, amt, rate, term);
    Loan l2;

    l1.show();
    l2.show();

    cout << "24CE122_Fayan";
    return 0;
}
