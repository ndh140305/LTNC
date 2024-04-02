#include <iostream>
using namespace std;


void passByValue(int x) {
    cout << &x << endl;
    x = 20;
}


void passByReference(int &y) {
    cout << &y << endl;
    y = 30;
}

int main() {
    int a = 10;

    cout << &a << endl; //0x61fdf0

    passByValue(a); //0x61fe1c

    cout << a << endl;

    passByReference(a); //0x61fdf0
    cout << a << endl;

    return 0;
}
