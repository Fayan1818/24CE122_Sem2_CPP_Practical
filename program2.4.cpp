#include<iostream>
#include<string>
using namespace std;

class InventoryItem {
public:
    int itemID;
    string itemName;
    float Price;
    int Quantity;

    InventoryItem() {
        itemID = 0;
        itemName = "N/A";
        Price = 0;
        Quantity = 0;
    }

    InventoryItem(int id, string name, float price, int quantity) {
        itemID = id;
        itemName = name;
        Price = price;
        Quantity = quantity;
    }

    void ItemDetail() {
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl << endl;
    }

    void AddStock(int quantity) {
        Quantity += quantity;
        cout << "Updated Quantity: " << Quantity << endl;
    }

    void SellItem(int sell) {
        if (Quantity >= sell) {
            Quantity -= sell;
            cout << "Remaining Quantity: " << Quantity << endl << endl;
        } else {
            cout << "Not enough stock!" << endl;
        }
    }

    void UpdateItem() {
        cout << "Updated Item Details: " << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl << endl;
    }
};

int main() {
    InventoryItem Item[3];
    Item[1] = InventoryItem(123, "Mobile", 2000, 1);
    Item[2] = InventoryItem(134, "TV", 1000, 1);

    for (int i = 1; i <= 2; i++) {
        cout << "------ Item " << i << " ------" << endl;
        Item[i].ItemDetail();
    }

    Item[1].AddStock(2);
    Item[1].SellItem(1);

    Item[2].AddStock(3);
    Item[2].SellItem(1);

    cout << "Updated Inventory:" << endl << endl;
    for (int i = 1; i <= 2; i++) {
        Item[i].UpdateItem();
    }

    cout << "24CE122_Fayan" << endl;
    return 0;
}
