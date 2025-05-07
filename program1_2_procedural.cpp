#include <iostream>
#include <string>
using namespace std;

struct Product {
    int Id;
    string Name;
    int Quantity;
    double Price;
};

void AddNewProduct(Product &p, int id, string name, int quantity, double price) {
    p.Id = id;
    p.Name = name;
    p.Quantity = quantity;
    p.Price = price;
    
    cout << "ID: " << p.Id << endl;
    cout << "Name: " << p.Name << endl;
    cout << "Quantity: " << p.Quantity << endl;
    cout << "Price: " << p.Price << endl;
}

void UpdateQuantity(Product &p, int quantity) {
    p.Quantity += quantity;
    cout << "Updated Quantity: " << p.Quantity << endl;
}

double TotalPrice(Product p) {
    return p.Quantity * p.Price;
}

int main() {
    Product P1, P2;

    AddNewProduct(P1, 1, "Pen", 10, 100);
    cout << "-----------------------------" << endl;
    AddNewProduct(P2, 2, "Notebook", 20, 200);
    cout << "=============================" << endl;

    UpdateQuantity(P1, 15);
    UpdateQuantity(P2, 30);

    cout << "Total Price (P1): Rs. " << TotalPrice(P1) << endl;
    cout << "Total Price (P2): Rs. " << TotalPrice(P2) << endl;

    cout << "\n24CE122_Fayan" << endl;
    return 0;
}
