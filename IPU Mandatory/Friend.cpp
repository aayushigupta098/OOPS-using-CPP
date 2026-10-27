#include <iostream>
using namespace std;
class Memory;
class CPU {
    int c;
public:
    void input() {
        cout << "Enter CPU utilization: ";
        cin >> c;
    }
    friend void check(CPU C, Memory M);
};
class Memory {
    int m;
public:
    void input() {
        cout << "Enter Memory utilization: ";
        cin >> m;
    }
    friend void check(CPU C, Memory M);
};
void check(CPU C, Memory M) {
    if (C.c < M.m)
        cout << "Start CPU-intensive task";
    else if (C.c > M.m)
        cout << "Start Memory-intensive task";
    else
        cout << "Both utilizations are equal";
}
int main() {
    CPU c1;
    Memory m1;
    c1.input();
    m1.input();
    check(c1, m1);
    return 0;
}
