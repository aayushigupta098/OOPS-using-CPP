#include <iostream>
using namespace std;
template <class T>
class Larger
{
    T a, b;
public:
    Larger(T x, T y)
    {
        a = x;
        b = y;
        cout << "Constructor called" << endl;
    }
    void display()
    {
        if (a > b)
            cout << "Larger value = " << a << endl;
        else if (b > a)
            cout << "Larger value = " << b << endl;
        else
            cout << "Both values are equal" << endl;
    }
    ~Larger()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Larger<int> obj1(10, 20);
    obj1.display();
    Larger<float> obj2(5.5, 3.2);
    obj2.display();
    return 0;
}
