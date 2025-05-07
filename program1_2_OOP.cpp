#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int Id;
    string Name;
    int Quantity;
    double Price;

public:
    void AddNewProduct(int id, string name, int quantity, double price) {
        Id = id;
        Name = name;
        Quantity = quantity;
        Price = price;

        cout << "ID: " << Id << endl;
        cout << "Name: " << Name << endl;
        cout << "Quantity: " << Quantity << endl;
        cout << "Price: " << Price << endl;
    }

    void UpdateQuantity(int quantity) {
        Quantity += quantity;
        cout << "Updated Quantity: " << Quantity << endl;
    }

    double TotalPrice() {
        return Quantity * Price;
    }
};

int main() {
    Product P1, P2;

    P1.AddNewProduct(1, "Pen", 10, 100);
    cout << "-----------------------------" << endl;
    P2.AddNewProduct(2, "Notebook", 20, 200);
    cout << "=============================" << endl;

    P1.UpdateQuantity(15);
    P2.UpdateQuantity(30);

    cout << "Total Price (P1): Rs. " << P1.TotalPrice() << endl;
    cout << "Total Price (P2): Rs. " << P2.TotalPrice() << endl;

    cout << "\n24CE122_Fayan" << endl;
    return 0;
}
