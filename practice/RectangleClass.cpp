#include <iostream>
using namespace std;
class Rect {
    double length, breadth;
public:
    Rect() {
        length = 1;
        breadth = 1;
    }
    Rect(double l, double b) {
        length = l;
        breadth = b;
    }
    void setLength(double l) {
        length = l;
    }
    void setBreadth(double b) {
        breadth = b;
    }
    double area() {
        return length * breadth;
    }
    double perimeter() {
        return 2 * (length + breadth);
    }
    void show() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main() {
    Rect r1;
    r1.setLength(5);
    r1.setBreadth(3);
    Rect r2(4, 6);
    cout << "Rectangle 1 (Default Constructor):" << endl;
    r1.show();
    cout << "Rectangle 2 (Parameterized Constructor):" << endl;
    r2.show();
    return 0;
}
