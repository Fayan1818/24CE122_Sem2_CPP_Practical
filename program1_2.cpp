#include<iostream>
#include<string>
using namespace std;

struct Product {
    int Id;
    string Name;
    int Quantity;
    double Price;

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

    void TotalPrice() {
        double totalPrice = Quantity * Price;
        cout << "Total Price: " << totalPrice << endl;
    }
};

int main() {
    Product P1, P2;  

    P1.AddNewProduct(1, "Milk_bottle", 10, 100);
    cout << "-----------------------------" << endl;
    P2.AddNewProduct(2, "Bread", 20, 200);

    cout << "=========================================================================" << endl;
    P1.UpdateQuantity(15);  
    P2.UpdateQuantity(30);  

    P1.TotalPrice();
    P2.TotalPrice();

    cout << endl << "24CE122_Fayan" << endl;

    return 0;  
}
