#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float getArea() {
        return length * width;
    }

    float getPerimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << getArea() << ", Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle* rects = new Rectangle[n]; // Dynamically create object array

    for (int i = 0; i < n; i++) {
        float l, w;
        cout << "Enter length and width of Rectangle " << i + 1 << ": ";
        cin >> l >> w;
        rects[i].setDimensions(l, w);
    }

    for (int i = 0; i < n; i++) {
        cout << "\nRectangle " << i + 1 << " details:" << endl;
        rects[i].display();
    }

    delete[] rects; 

    cout << "\n24CE122_Fayan" << endl;
    return 0;
}
