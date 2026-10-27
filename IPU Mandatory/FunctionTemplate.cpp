#include <iostream>
using namespace std;
template <class T>
T square(T n)
{
    return n * n;
}
int main()
{
    cout << "Square of integer: " << square(5) << endl;
    cout << "Square of float: " << square(2.5f) << endl;
    cout << "Square of double: " << square(3.5) << endl;
    return 0;
}
