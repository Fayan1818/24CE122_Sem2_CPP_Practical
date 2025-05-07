#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float m1, m2, m3;

public:
    Student() {
        roll = 0;
        name = "Default";
        m1 = m2 = m3 = 0;
    }

    Student(int r, string n, float a, float b, float c) {
        roll = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    float getAverage() {
        return (m1 + m2 + m3) / 3;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Average: " << getAverage() << endl;
    }
};

int main() {
    Student s1;
    Student s2(101, "Fayan", 78, 85, 90);
    Student s3(102, "Shahid", 92, 88, 95);

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    cout << "\nStudent 3:" << endl;
    s3.display();

    cout << "\n24CE122_Fayan" << endl;
    return 0;
}
