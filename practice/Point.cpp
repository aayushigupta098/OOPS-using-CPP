#include <iostream>
#include <cmath> 
using namespace std;
class Point {
private:
    float x;
    float y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(float val) {
        x = val;
        y = val;
    }
    Point(float xVal, float yVal) {
        x = xVal;
        y = yVal;
    }
    void show() {
        cout << "(" << x << ", " << y << ")";
    }
    float distanceFromOrigin() {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
    float distanceBetween(Point other) {
        return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
    }
};
int main() {
    Point obj1;             
    Point obj2(5);        
    Point obj3(2, 7); 
    cout << "Point 1: "; obj1.show(); cout << endl;
    cout << "Point 2: "; obj2.show(); cout << endl;
    cout << "Point 3: "; obj3.show(); cout << endl;
    cout << "Distance of Point 1 from Origin: " << obj1.distanceFromOrigin() << endl;
    cout << "Distance of Point 2 from Origin: " << obj2.distanceFromOrigin() << endl;
    cout << "Distance of Point 3 from Origin: " << obj3.distanceFromOrigin() << endl;
    cout << "Distance between Point 2 and Point 3: " << obj2.distanceBetween(obj3) << endl;
    return 0;
}
